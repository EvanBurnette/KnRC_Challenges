/* Exercise 1-22. Write a program to "fold" long input lines into two or more shorter lines after the last non-blank character that occurs before the n-th column of input. Make sure your program does something intelligent with very long lines, and if there are no blanks or tabs before the specified column. */

#include <stdio.h>

#define TAB 4
#define MAXLINE 1000
#define FOLDAT 80

void copyLinePiece ( char line[], char piece[], int begin, int end);
int findDisplayWidth ( const char line[] );
void foldLine ( char line[], int length );
int getmyline ( char line[] );

int main() {
  int length;
  extern int done;
  char myline[MAXLINE];
  char mypiece[MAXLINE];
  int width = 0;
  int i;
  while (!done)//While not done
  {
    length = getmyline( myline );//Get each line and put it in 'myline' variable, set length with return from getmyline function
    // width = findDisplayWidth( myline );
    i = 0;
    while (length > i) {
      copyLinePiece( myline, mypiece, i, i + FOLDAT );
      printf("%s\n", mypiece);
      i += FOLDAT + 1;
    }
  }
}

void foldLine ( char line[], int length ){

}

int done = 0;
int getmyline( char line[]) {
  char c;
  int l = 0;
  while ( ((c = line[l] = getchar()) != EOF) && c != '\n'){
    ++l;
  }
  if (c == EOF)
  {
    done = 1;
    line[l] = '\0';
  }
  else if (c == '\n')
    line[l] = '\0';
  return l;
}
int findDisplayWidth( const char line[] ){
  int width = 0;
  int column = 0;
  char c;
  for (int i = 0; (c = line[i]) != '\0'; i++){
    if (c == '\t')
      for (int j = 1; j <= TAB && column % TAB != 0; j++)
        column++;
    else ++width;
  }
  return width;
}

void copyLinePiece ( char line[], char piece[], int begin, int end){
  int i = 0;
  for ( ; i <= end - begin; i++){
    piece[i] = line[begin + i];
  }
  piece [i] = '\0';
}