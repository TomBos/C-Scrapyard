/*
=====================  ASSIGNMENT  =====================

Given the definitions: int a = 2, b = 2, c = 1, d = 0, e = 4;
Write a program that prints the value of the following expression: a++ / ++c * --e
Also verify the correctness by manual calculation.

=========================================================
*/

#include <stdio.h>

int main() {
	int a = 2, c = 1, e = 4, res = 0;

	// Post increment, a stays same
	// a = 2;

	// Pre increment, c increases by 1
	// c = 2;

	// Pre decrement, e decreases by 1
	// e = 3;

	// Result: 
	// res = a++ / ++c * --e	
	// res = 2 / 2 * 3
	// res = 1 * 3
	// res = 3

	res = a++ / ++c * --e;
	printf("Output: %d\n", res);
	return 0;
}

