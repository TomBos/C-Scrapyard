/*
=====================  ASSIGNMENT  =====================

Write a program that reads a character from input and
prints the character with a value one higher in the ASCII table.

Example:
Input:  A
Output: B

=========================================================
*/

#include <stdio.h>

int main() {
	printf("%s","Input:  ");	
	int c = getchar();
	c++;
	printf("%s %c\n","Output:",c);
	return 0;
}
