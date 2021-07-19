#include <stdio.h>

#define MAXC 256

int main()
{
	char c;
	int cgram[MAXC];

	for (int i = 0; i < MAXC; ++i) cgram[i] = 0;

	while ( (c = getchar()) != EOF )
		cgram[c]++;

	for (int i = 0; i < MAXC; ++i)
	{
		if (cgram[i] > 0)
		{
			if (i == '\n') printf("\\n");
			else if (i == ' ') printf("space");
			else if (i == '\t') printf("tab");
			else putchar(i);
//			printf("\t%d\n", cgram[i]);
			printf("\t");
			for (int j = 0; j < cgram[i]; ++j) putchar('*');
			printf("\n");
		}
	}
}
