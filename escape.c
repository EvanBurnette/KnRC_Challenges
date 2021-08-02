#include <stdio.h>
#define MAXLINE 1000
void escape (char s[], char t[]);
void unescape (char s[], char t[]);

int main() {
  char s[MAXLINE] = "		Test 		string\nwith two lines\0";
  char t[MAXLINE];

  escape(s, t);
  printf("%s\n", s);
  printf("%s\n", t);

  return 0;
}

void escape (char s[], char t[]){
  char c;
  int i, j;
  for (i = 0, j = 0; (c = s[i]) ; i++, j++){
    switch (c){
      case '\t':
        t[j] = '\\';
        j++;
        t[j] = 't';
        break;
      case '\n':
        t[j] = '\\';
        j++;
        t[j] = 'n';
        break;
      default:
        t[j] = c;
        break;
    }
    if ( c == '\0') break;
  }
}

void unescape (char s[], char t[]){
  char c;
  int i, j;
  for (i = 0, j = 0; (c = s[i]) ; i++, j++){
    switch (c){
      case '\\':
        t[j] = '\\';
        j++;
        t[j] = 't';
        break;
      case '\n':
        t[j] = '\\';
        j++;
        t[j] = 'n';
        break;
      default:
        t[j] = c;
        break;
    }
    if ( c == '\0') break;
  }
}
