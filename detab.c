#include <stdio.h>

#define TAB 7
#define MAXLINE 1000

int getmyline(char line[]);
int getmyline(char line[])
{
	char c;
	int l = 0;
	while (( line[l] = getchar()) != EOF && line[l] != '\n')
		l++;
	return l;
}

int main()
{
    char line[MAXLINE];
    int done = 0;
    int length;
    int i;
    int currentColumn;
    while (!done)
    {
        currentColumn = 0;
        length = getmyline (line);

        for (i = 0; i <= length; i++)
        {
            if (line[i] == '\t')
            {
                for (int j = 1; j <= TAB; j++)
                    if ( (currentColumn + j) % TAB == 0 )
                    {
                        for (int k = 0; k < j; k++) //do this j times
                        {
                            putchar(' ');
                            currentColumn++;
                        }
                        break;
                    }
            }
            else if (line[i] == EOF)
                done = 1;
            else
            {
                putchar(line[i]);
                currentColumn++;
            }
        }
    }
}