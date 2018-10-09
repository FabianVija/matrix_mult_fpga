#include "xparameters.h"
#include "xmatrix_mult_hw.h"
#include "xmatrix_mult.h"
#include <stdio.h>
#include "matrix_mult.h"

int main(void){

	int ready = 0;
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


	// start the multiplication algorithm
	XMatrix_mult_Start(&multi);

	// if is NOT done the function XMatrix_mult_IsDone return 1
	while(XMatrix_mult_IsDone(&multi)){
	}

	// see difference of time

    // read the variables
    XMatrix_mult_Read_a_Bytes(&multi, 0, &aa[0], 40);
    XMatrix_mult_Read_b_Bytes(&multi, 0, &bb[0], 40);
    XMatrix_mult_Read_prod_Bytes(&multi, 0, &prod[0], 50);


    // show the variables over uart (yes it works jaja you can try it)
    // print_matrix(aa, 40);
    // print_matrix(bb, 40);

    // store the product in the matrix
    int counter = 0;
    for(i=0; i<IN_A_ROWS; i++){
    	for(j=0; j<IN_B_COLS; j++){
    		product[i][j] = (((short)prod[counter+1]) << 8) | (0x00ff & prod[counter]);
    		counter=counter+2;
    	}
    }


	int a = 0; // just a breakpoint for the debugger

}

void print_matrix(char matrix[], int size)
{	// show over uart
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
