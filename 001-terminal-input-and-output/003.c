/*
=====================  ASSIGNMENT  =====================

Write a program that reads a whole decimal number (0–255)
from input and prints its hexadecimal value as a two-digit
uppercase string followed by 'h'.

Example:
Input:  127
Output: 7Fh

=========================================================
*/

#include <stdio.h>

int main() {
	int c;
	int i = 0;
	int dec = 0;

	printf("%s","Input:  ");
	while ((c = getchar()) != EOF && c != '\n' && i < 3) {
		if (c >= '0' && c <= '9') {
			dec = dec * 10 + (c - '0');	
			i++;
		}
	}

	if (dec > 255) {
		dec = 255;
	}

	printf("Output: %Xh\n", dec);
	return 0;
}

