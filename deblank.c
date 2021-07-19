#include <stdio.h>

int main()
{
	char c, lastc;
	lastc = 'z';
	while ((c = getchar()) != EOF)
		if (c == ' ' && lastc == ' ')
			;
		else
		{
			putchar(c);
			lastc = c;
		}
}
