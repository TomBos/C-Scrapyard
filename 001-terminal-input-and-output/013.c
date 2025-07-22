/*
=====================  ASSIGNMENT  =====================

Write a program that reads 3 uppercase letters and prints them as 3 lowercase letters.

Input:  ABC
Output: abc

=========================================================
*/

#include <stdio.h>

int main() {
	int c;
	int strlen = 3;
	int i = 0;
	char str[strlen + 1]; // 1 more space for '\0'
	
	printf("%s","Input:  ");
	while ((c = getchar()) != EOF && c != '\n' && i < strlen) {
		if (c >= 'A' && c <= 'Z') {
			str[i++] = c - 'A' + 'a';		
		}
	}

	str[i] = '\0';


	printf("Output: %s\n", str);
	return 0;
}
