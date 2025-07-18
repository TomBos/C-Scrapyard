/*
=====================  ASSIGNMENT  =====================

Given the definitions: int a = 2, b = 2, c = 1, d = 0, e = 4;
Write a program that prints the value of the following expression: --b * c++ - a
Also verify the correctness by manual calculation.

=========================================================
*/

#include <stdio.h>

int main() {
	int a = 2, b = 2, c = 1, res = 0;

	// Pre decrement, b decreases by 1
	// b = 1;

	// Post increment, c stays same
	// c = 1;

	// Result:
	// res = --b * c++ - a
	// res = 1 * 1 - 2
	// res = 1 - 2
	// res = -1

	res = --b * c++ - a;
	printf("Output: %d\n", res);
	return 0;
}

