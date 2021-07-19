#include <stdio.h>
#define MAXLINE 1000

int getmyline( char fline[] );
int reverse ( char fline[], int length );

int main()
{
    char line[MAXLINE];
    int linelength;
    while (1)
    {
        linelength = getmyline( line );
        reverse( line, linelength );
        // printf( '%s', line )
        if (line[linelength] == EOF) break;
    }
}

int getmyline( char fline[] )
{
    char c;
    int l = 0;
    while ( (c = getchar()) != EOF && (c != '\n') ){
        fline[l] = c;
        l++;
    }
    if (c == EOF) fline[l] = c;
    return l;
}

int reverse( char fline[], int length )
{
    for (int i = length; i > 0; i--) putchar(fline[i]);
    putchar('\n');
    return 0;
}