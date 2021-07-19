#include <stdio.h>

#define IN   1
#define OUT  0
#define WMAX 100

int main()
{
	char c;
	int ngram[WMAX];

	int length = 0;
	int state = OUT;
	int i;

	for (i = 0; i < WMAX; ++i)
		ngram[i] = 0;

	while( (c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\n' || c == '\t')
		{
			if (state == IN)
				{
					++ngram[length];
					state = OUT;
					length = 0;
				}
		}
		else
		{
			state = IN;
			++length;
		}
	}
	for (i = 1; i < WMAX; ++i)
		if (ngram[i] > 0)
			{
				printf("%d\t", i);
				for (int j = 0; j < ngram[i]; j++) putchar('*');
				putchar('\n');
			}
}
