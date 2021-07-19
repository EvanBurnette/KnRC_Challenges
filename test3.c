#include <stdio.h>

int main ()
{
	int i;
	char test[10];
	for (i = 0; i < 9; ++i)
	{
		test[i] = 'A';
	}
	test[i+1] = '\0';
	for (int j = 5; j < 8; j++) {
		putchar(test[j]);
	}
	printf("\n");

}
