/*
=====================  ASSIGNMENT  =====================

Given the definitions: int a = 2, b = 2, c = 1, d = 0, e = 4;
Write a program that prints the value of the following expression: e / --a * b++ / c++
Also verify the correctness by manual calculation.

=========================================================
*/

#include <stdio.h>

int main() {
	int a = 2, b = 2, c = 1, e = 4, res = 0;

	// Pre decrement, a decreases by 1
	// a = 1;

	// Post decrement, b stays same
	// b = 2;

	// Post increment, e stays same
	// c = 1;

	// Result: 
	// res = e / --a * b++ / c++
	// res = 4 / 1 * 2 / 1
	// res = (4/1) * (2/1)
	// res = 4 * 2
	// res = 8

	res = e / --a * b++ / c++;
	printf("Output: %d\n", res);
	return 0;
}

