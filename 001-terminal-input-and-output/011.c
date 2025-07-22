/*
=====================  ASSIGNMENT  =====================

Given the definitions: int a = 2, b = 2, c = 1, d = 0, e = 4;
Write a program that prints the value of the following expression: a %= b = d = 1 + e / 2
Also verify the correctness by manual calculation.

=========================================================
*/

#include <stdio.h>

int main() {
	int a = 2, b = 2, d = 0, e = 4;
	int res = 0;

	// Result: 
	// res = a %= b = d = 1 + e / 2
	// res = a = a % ( b = d = 1 + e / 2)
	// res = a = a % ( b = d = ( 1 + (e/2) ))
	// res = a = 2 % ( b = d = ( 1 + (4/2) ))
	// res = a = 2 % ( b = d = ( 1 + 2 ))
	// res = a = 2 % ( b = d = 3 )
	// res = a = 2 % 3
	// res = a = 2
	// res = 2

	res = a %= b = d = 1 + e / 2;
	printf("Output: %d\n", res);
	return 0;
}

