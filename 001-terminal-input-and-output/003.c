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
	int c, i = 0;
	while ((c = getchar()) != EOF && c != '\n' && i < 3) {
		if (c >= '0' && c <= '9') {
			printf("%s", "in range");
			i++;
		}
	}

	return 0;
}

