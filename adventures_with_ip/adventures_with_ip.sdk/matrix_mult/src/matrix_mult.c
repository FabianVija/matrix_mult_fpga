/***************************** Include Files *********************************/

#include "xparameters.h"
#include "xmatrix_mult_hw.h"
#include "xmatrix_mult.h"
#include <stdio.h>
#include "matrix_mult.h"
#include "xscutimer.h"


/************************** Constant Definitions *****************************/

/*
 * The following constants map to the XPAR parameters created in the
 * xparameters.h file. They are only defined here such that a user can easily
 * change all the needed parameters in one place.
 */
#define TIMER_DEVICE_ID		XPAR_XSCUTIMER_0_DEVICE_ID
#define TIMER_LOAD_VALUE	0xFFFF
#define TEST_REPETITIONS    500

/**************************** Type Definitions *******************************/

/***************** Macros (Inline Functions) Definitions *********************/

/************************** Function Prototypes ******************************/

int setupTimer();
int resetAndStartTimer();
int getTimerElapsedTicks();


/************************** Variable Definitions *****************************/

XScuTimer Timer;		/* Cortex A9 SCU Private Timer Instance */
volatile u32 CntValue1 = 0;
volatile u32 CntValue2 = 0;
XScuTimer *TimerInstancePtr = &Timer;


/*****************************************************************************/

int main(void) {

	printf("\r\n--------------- SETUP ---------------\r\n");

	setupTimer();

	printf("\r\n--------------- MATRIX MULT ---------------\r\n");
	printf("Size: %d X %d\r\n", IN_A_ROWS, IN_A_COLS);

	int ready = 0;
	int elapsed_ticks = 0;
	XMatrix_mult multi = {0,XST_DEVICE_NOT_FOUND};
	mat_a in_mat_a[IN_A_ROWS][IN_A_COLS] = {
	    		  {26, 27, 28, 29, 30},
	    		  {31, 32, 33, 34, 35},
	    		  {36, 37, 38, 39, 40},
	    		  {41, 42, 43, 44, 45},
	    		  {46, 47, 48, 49, 50}
	    	   };
	mat_b in_mat_b[IN_B_ROWS][IN_B_COLS] = {
			      {1, 2, 3, 4, 5},
				  {6, 7, 8, 9, 10},
				  {11, 12, 13, 14, 15},
				  {16, 17, 18, 19, 20},
				  {21, 22, 23, 24, 25}
	    	   };

	mat_prod product[IN_A_ROWS][IN_B_COLS]; // to store the product

	char aa[40]; // to store the result of read matrix a
	char bb[40]; // to store the result of read matrix b
	char prod[50]; // to store the result of read product

	// initialize struct XMatrix_mult (multi)
	XMatrix_mult_Initialize(&multi, XPAR_XMATRIX_MULT_0_DEVICE_ID);

	// write matrices
	int i;
	int j=0;
	for(i=0; i < 40; i=i+8)	{
		XMatrix_mult_Write_a_Bytes(&multi, i, &in_mat_a[j][0], IN_A_COLS);
		XMatrix_mult_Write_b_Bytes(&multi, i, &in_mat_b[j][0], IN_B_COLS);
		j ++;
	}

	// set start time
	double average_elapsed = 0;
	double min_elapsed = 0;
	double max_elapsed = 0;
	double first_elapsed = 0;

	for (int i=0; i<TEST_REPETITIONS; i++) {
		// start the multiplication algorithm
		resetAndStartTimer();
		XMatrix_mult_Start(&multi);

		// if is NOT done the function XMatrix_mult_IsDone return 1
		while(XMatrix_mult_IsDone(&multi)){
		}

		// see difference of time
		getTimerElapsedTicks(&elapsed_ticks);
//		printf("Elapsed: %d\r\n", elapsed_ticks);

		if (first_elapsed == 0) {
			first_elapsed = elapsed_ticks;
		}

		if (min_elapsed > elapsed_ticks || min_elapsed == 0) {
			min_elapsed = elapsed_ticks;
		}

		if (max_elapsed < elapsed_ticks || max_elapsed == 0) {
			max_elapsed = elapsed_ticks;
		}

		average_elapsed += elapsed_ticks;
	}

	average_elapsed = average_elapsed/TEST_REPETITIONS;

	printf("Runs: %d\r\n", TEST_REPETITIONS);
	printf("Average Elapsed: %.2f\r\n", average_elapsed);
	printf("Min Elapsed:     %.2f\r\n", min_elapsed);
	printf("Max Elapsed:     %.2f\r\n", max_elapsed);
	printf("First Elapsed:   %.2f\r\n", first_elapsed);

//    // read the variables
//    XMatrix_mult_Read_a_Bytes(&multi, 0, &aa[0], 40);
//    XMatrix_mult_Read_b_Bytes(&multi, 0, &bb[0], 40);
//    XMatrix_mult_Read_prod_Bytes(&multi, 0, &prod[0], 50);

//    // store the product in the matrix
//    int counter = 0;
//    for(i=0; i<IN_A_ROWS; i++){
//    	for(j=0; j<IN_B_COLS; j++){
//    		product[i][j] = (((short)prod[counter+1]) << 8) | (0x00ff & prod[counter]);
//    		counter=counter+2;
//    	}
//    }

	int a = 0; // just a breakpoint for the debugger

}

/*****************************************************************************/

void print_matrix(char matrix[], int size) {	// show over uart
	int i = 0;

	for(i = 0; i<size; i++)
	{
		printf("%x",(uint8_t)matrix[i]);
		if(i%5 == 0)
		{
			printf("d");
		}
	}
	printf("0000000000000000000000000");
}

/*****************************************************************************/

int setupTimer() {
	int Status;
	XScuTimer_Config *ConfigPtr;

	/*
	 * Initialize the Scu Private Timer so that it is ready to use.
	 */
	ConfigPtr = XScuTimer_LookupConfig(TIMER_DEVICE_ID);

	/*
	 * This is where the virtual address would be used, this example
	 * uses physical address.
	 */
	Status = XScuTimer_CfgInitialize(TimerInstancePtr, ConfigPtr,
				 ConfigPtr->BaseAddr);
	if (Status != XST_SUCCESS) {
		return XST_FAILURE;
	}

	/*
	 * Load the timer counter register.
	 */
	XScuTimer_LoadTimer(TimerInstancePtr, TIMER_LOAD_VALUE);

	return XST_SUCCESS;
}

/*****************************************************************************/

int resetAndStartTimer() {
	/*
	 * Load the timer counter register.
	 */
	XScuTimer_LoadTimer(TimerInstancePtr, TIMER_LOAD_VALUE);

	/*
	 * Get a snapshot of the timer counter value before it's started
	 * to compare against later.
	 */
	CntValue1 = XScuTimer_GetCounterValue(TimerInstancePtr);

	/*
	 * Start the Scu Private Timer device.
	 */
	XScuTimer_Start(TimerInstancePtr);

	return XST_SUCCESS;
}

/*****************************************************************************/

int getTimerElapsedTicks(int* elapsedTicks) {
	/*
	 * Stop the Scu Private Timer device.
	 */
	XScuTimer_Stop(TimerInstancePtr);

	/*
	 * Get a snapshot of the timer counter value
	 */
	CntValue2 = XScuTimer_GetCounterValue(TimerInstancePtr);

	/*
	 * Return the difference between the two readings, which should be the elapsed amount of time
	 */
	*elapsedTicks = CntValue1 - CntValue2; /* Decreasing timer, so the subtraction has to be inverted */

	return XST_SUCCESS;
}

/*****************************************************************************/
