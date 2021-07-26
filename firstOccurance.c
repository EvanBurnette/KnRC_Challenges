#include <stdio.h>
//ex 2-5: returns first character from second string that appears in first string
int any ( char s1[], char s2[] );

int main() {
  char text[1000] = "I am a test string\0";
  char findFirst[1000] = "ts\0";
  int i = any( text, findFirst );
  printf("%d\n", i);
}

int any ( char s1[], char s2[] ){
  int first = -1;
  for (int i = 0; s1[i] != '\0'; i++)
    for (int j = 0; s2[j] != '\0'; j++)
      if (s1[i] == s2[j]){
        first = i;
        return first;
      }
  return first;
}