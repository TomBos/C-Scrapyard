/*
=====================  ASSIGNMENT  =====================

Given the definitions: int a = 2, b = 2, c = 1, d = 0, e = 4;
Write a program that prints the value of the following expression: ++a - --e
Also verify the correctness by manual calculation.

=========================================================
*/


#include <stdio.h>

int main() {
	int a = 2, e = 4, res = 0;

	// Pre increment, a increases by 1
	// a = 3;

	// Pre decrement, e decreases by 1
	// e = 3;

	// Result:
	// res = ++a - --e
	// res = 3 - 3
	// res = 0

	res = ++a - --e;
	printf("Output: %d\n", vim);
	return 0;
}

