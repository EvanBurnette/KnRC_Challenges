#include <stdio.h>

int main()
{
	char c;
	int w;
	w = 0;
	while ( (c = getchar()) != EOF)
		if (c == '\n' || c == '\t' || c == ' ')
			++w;
	printf("\n%d\n", w);
}
