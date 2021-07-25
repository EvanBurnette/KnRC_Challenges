#include <stdio.h>
#include <ctype.h>

#define HEXMAX 10

int htoi ( char s[], int length );
int getmyline ( char s[] );
void clearString( char s[] );
int done = 0;

int main() {
  char string[HEXMAX];
  int converted = 0;
  int length;
  for (;!done;){
    clearString( string );
    length = getmyline( string );
    converted = htoi( string, length );
    printf("%s\t%d\t%d\n", string, converted, length);
    }
}

int htoi ( char s[], int length ){
  int num = 0;
  char c;
  unsigned int mult = 1;
  for ( int i = length - 1; i >= 0; i-- ) {
    c = s[i];
    if ( isalpha(c) ) {
      c = toupper(c);
      if ( c == 'X' ) break;
      else if ( c < 'A' || c > 'F') return '\0';
      else num += ( c - 'A' + 10 )*mult;
      mult = mult << 4;
    }
    else if ( isdigit(c) ) {
      num += ( c - '0' )*mult;
      mult = mult << 4;
    }
    else
      ;
  }
  return num;
}

int getmyline( char s[] ){
  int l = 0;
  char c;
  for( ; (c = s[l] = getchar()) != EOF && c != '\n'; l++ )
    ;
  if (c == EOF) done = 1;
  s[l] = '\0';
  return l;
}

void clearString( char s[] ){
  for (int i = 0; i <= HEXMAX; i++){
    s[i] = '\0';
  }
}