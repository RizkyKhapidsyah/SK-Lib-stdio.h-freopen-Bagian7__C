#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
	Source by AlphaCodingSkills
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main() {
	FILE* pFile = freopen("test.txt", "w", stdout);

	printf("stdout is redirected to test.txt.");

	fclose(stdout);

	_getch();
	return 0;
}

