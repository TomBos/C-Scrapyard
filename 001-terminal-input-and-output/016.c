/*
=====================  ASSIGNMENT  =====================

Write a program that prints the maximum number that can be stored in a short int and in a long.

=========================================================
*/

#include <stdio.h>

int main() {
	short s_max = 1;
	int s_bits = sizeof(short) * 8;
	
	for (int i = 0; i < s_bits - 2; i++) {
		s_max *= 2;
	}

	s_max = s_max * 2 - 1;
	printf("%d\n", s_max);

	long l_max = 1;
	int l_bits = sizeof(long) * 8;
	
	for (int i = 0; i < l_bits - 2; i++) {
		l_max *= 2;
	}
	
	l_max = l_max * 2 - 1;
	printf("%ld\n", l_max);

	return 0;
}
