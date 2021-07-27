#include <stdio.h>
char lower( char c );

int main(){
  char myline[1000] = "HULK IS ANGRY THAT CONDITIONAL EXPRESSION IS KNOWN AS TERNARY BECAUSE IT'S NOT AS DESCRIPTIVE!!!\0";
  char c;
  for (int i = 0; (c = myline[i]) != '\0'; ++i)
    putchar(lower(c));
  putchar('\n');
  return 0;
}

char lower( char c ){
  return ((c <= 'Z' && c >= 'A') ? c - 'A' + 'a' : c );
}