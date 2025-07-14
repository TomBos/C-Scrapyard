/*
=====================  ASSIGNMENT  =====================

Write a program that adds a 25% tax to a given price.

Input:	Enter the price without tax: 100
Output:	Sales price with tax (25%): 125

=========================================================
*/

#include <stdio.h>

int main() {
	int c;
	int i = 0;
	int dec = 0;

	printf("%s","Input:  Enter the price without tax: ");
	while ((c = getchar()) != EOF && c != '\n' && i < 8) {
		if (c >= '0' && c <= '9') {
			dec = dec * 10 + (c - '0');
			i++;
		}
	}

	dec = (dec*125)/100;

	printf("Output: Sales price with tax (25%): %d\n", dec);
	return 0;
}
