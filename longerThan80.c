#include <stdio.h>
#include <limits.h>

#define LINE_LIMIT 80
#define MAXLINE 1000

int getNextLine( char line[] );

int getNextLine( char line[] )
{
	int length = 0;

	char c;

	while( (c = getchar()) != '\n' && c != EOF)
	{
		line[length] = c;
		++length;
	}
	line[length] = '\0';
	if ( c == EOF ) return -1;
	return length;
}

int main()
{
	int i = 1;
	char thisLine[MAXLINE];
	int thisLength;
	printf("Line#\tLength\tText\n");
	while ( (thisLength = getNextLine( thisLine ) ) > 0)
	{
		++i;
		if ( thisLength > 80 )
			printf("%3d\t%3d\t%s\n", i, thisLength, thisLine);
	}
}
