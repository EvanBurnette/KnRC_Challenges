#include <stdio.h>

int main()
{
	int c;

	while (((c = getchar()) != EOF))
	{
		printf("%c\t%g\n", c, c);
	}
	return 0;
}
