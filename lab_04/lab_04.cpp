#include "stdafx.h"

int main() {

	int c, ns = 0;
	int flag = 1;

	printf("Enter string: ");
	printf("\n");
	while (flag == 1)
	{
		c = getchar();

		(c != ' ') ? ns = 0 : ++ns;
		if (ns <= 1) { printf("%c", c); }
		if (c == '\n') { flag = 0; }
	}

	printf("\n");
	return flag;
}