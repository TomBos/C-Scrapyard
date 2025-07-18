/*
=====================  ASSIGNMENT  =====================

Write a program that calculates the area of a rectangle.

Input:	Enter the length and width: 5 4
Output:	Rectangle with length 5 and width 4 has area 20

=========================================================
*/
#include <stdio.h>

int main() {
	int c;

	// Parsing length
	int pl = 1;
	int l = 0, w = 0, res = 0;

	printf("%s","Input:  Enter the length and width: ");
	while ((c = getchar()) != EOF && c != '\n') {
		if (c == ' ') {
			pl = 0;	
			continue;	
		}

		if (c >= '0' && c <= '9') {
			if (pl) {
				l = l * 10 + (c - '0');
			} else {
				w = w * 10 + (c - '0');
			}
		}
	}

	res = l * w;
	printf("Output: Rectangle with length %d and width %d has area %d\n", l, w, res);
	return 0;
}

