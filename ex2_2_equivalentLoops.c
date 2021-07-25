#include <stdio.h>
#define MAXLINE 1000

int main(){
  char c;
  int i;
  int lim = 10;
  char s[MAXLINE];

  // for (i = 0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i) s[i] = c;

  for (i = 0; i < lim-1; ++i)
  {
    if ((c=getchar()) != 'n') break;
    else if ( c != EOF ) break;
    else s[i] = c;
  }
  printf("%s\n", s);
} 