#include <stdio.h>
// ex 2-5 remove all letters of second string from first string
void squeeze(char s[], char s2[]);

int main() {
  char userStr[1000] = "I am a fluffy bunny\0";
  char removeStr[1000] = "aeiouAEIOU\0";
  printf("%s\n", userStr);
  printf("%s\n", removeStr);
  squeeze( userStr, removeStr );
  printf("%s\n", userStr);
}

void squeeze(char s[], char s2[]){
  int i, j, k;
  char c;
  int remove;

  for (i = j = 0; s[i] != '\0'; i++){
    remove = 0;
    for ( k = 0; (c = s2[k]) != '\0' ; k++ )
      if (s[i] == c)
        remove = 1;
    if (!remove)
      s[j++] = s[i];
  }
  s[j] = '\0';
}
