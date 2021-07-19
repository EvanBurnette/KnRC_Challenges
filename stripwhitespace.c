#include <stdio.h>
#define MAXLINE 1000

int getmyline ( char myline[] );
int findlength ( char myline [] );
int findstart ( char myline[] );
int findend ( char myline[] );

int main()
{
	char line[MAXLINE];
	int length = 0;
	int start = 0;
	int end = 0;
	int done = 0;
	while ( 1 )
	{
		done = getmyline( line );
		length = findlength( line );
		start = findstart( line );
		end = findend( line );

		for (int i = start; i < end; i++)
			putchar( line[i] );
		if (start < end) 
			putchar('\n');
		if (done) break;
	}
}

int getmyline( char myline[] )
{
	char c;
	int i = 0;
	while ( ( c = getchar() ) != EOF && c != '\n' )
	{
		myline[i] = c;
		i++;
	}
	myline[ i ] = '\0';
	if (c == EOF) return 1;
	else return 0;
}

int findlength( char myline[] )
{
	int l = 0;
	while ( myline[l] != '\0') l++;
	return l;
}

int findstart( char myline[] )
{
	int c;
	int s;
	int len = findlength( myline );
	for ( s = 0; (s < len) && ( ( c = myline[s] ) == '\t' || c == ' '); s++ )
		;
	return s;
}

int findend ( char myline[] )
{
	int c;
	int e;
	for ( e = findlength( myline ) - 1; (e > 0) && (( c = myline[e] ) == '\t' || c == ' ' || c == '\0') ; e--)
		;
	return e + 1;
}