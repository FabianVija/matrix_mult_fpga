#include "matrix_mult.h"

int main(void){
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

	mat_prod product[IN_A_ROWS][IN_B_COLS];

	matrix_mult(in_mat_a, in_mat_b, product);

	int a = 0;

}
