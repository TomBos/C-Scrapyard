/*
=====================  ASSIGNMENT  =====================

Write a program that reads a real number and prints its integer part.

Input:  -123.558552
Output: -123

=========================================================
*/

#include <stdio.h>

int main() {
	int c;
	int sign = 1, num = 0, i = 0;
	
	printf("%s","Input:  ");
	while ((c = getchar()) != EOF && c != '\n') {
		if (c == '-' && i == 0) {
			sign = -1;
		} else if (c >= '0' && c <= '9') {
			num = num * 10 + (c - '0');
		} else if (c == '.') {
			break;
		}

		i = i++;
	}

	printf("Output: %d\n", num * sign);
	return 0;
}

