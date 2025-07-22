/*
=====================  ASSIGNMENT  =====================

Write a program that prints the maximum number that can be stored in an unsigned int and in a signed int.

=========================================================
*/

#include <stdio.h>

int main() {
	unsigned int ui = 0;
	unsigned int ui_max = 1;

	int ui_bits = sizeof(unsigned int) * 8;

	for (int i = 0; i < ui_bits - 1; i++) {
		ui_max *= 2;
	}

	ui_max = ui_max * 2 - 1;

	printf("%u\n", ui_max);

	int si = 0;
	int si_max = 1;

	int si_bits = sizeof(int) * 8;

	for (int j = 0; j < si_bits - 2; j++) {
		si_max *= 2;
	}

	si_max = si_max * 2 - 1;

	printf("%d\n", si_max);

	return 0;
}

