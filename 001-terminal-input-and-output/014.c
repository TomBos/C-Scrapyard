/*
=====================  ASSIGNMENT  =====================

Write a program that reads 3 lowercase letters and prints them as 3 uppercase letters in reverse order.

=========================================================
*/


#include <stdio.h>

int main() {
	int c;
	int strlen = 3, i = 0;
	char str[strlen + 1]; // 1 more space for '\0'
	
	printf("%s","Input:  ");
	while ((c = getchar()) != EOF && c != '\n' && i < strlen) {
		if (c >= 'a' && c <= 'z') {
			str[i++] = c - 'a' + 'A';
		}
	}

	for (int j = 0, k = i - 1; j < k; j++, k--) {
		char tmp = str[j];
		str[j] = str[k];
		str[k] = tmp;
	}

	str[i] = '\0';

	printf("Output: %s\n", str);
	return 0;
}
