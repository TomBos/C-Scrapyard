/*
=====================  ASSIGNMENT  =====================

Write a program that writes out exactly this text:
James Bond \ "Agent 007" \ # 150% insurance # / Ltd. with unlimited liability

=========================================================
*/

#include <stdio.h>

int main() {
	printf("%s \\ ", "James Bond");
	printf("\"%s\" \\ ", "Agent 007");
	printf("%s / ", "# 150\% insurance #");
	printf("%s\n","Ltd. with unlimited liability");
	return 0;
}

