/* Exercise 1-22. Write a program to "fold" long input lines into two or more shorter lines after the last non-blank character that occurs before the n-th column of input. Make sure your program does something intelligent with very long lines, and if there are no blanks or tabs before the specified column. */

#include <stdio.h>

#define TAB 4
#define MAXLINE 1000
#define FOLDAT 80

void foldLine ( char line[], int length );
int getmyline ( char line[] );

int main() {
  int length;
  extern int done;
  char myline[MAXLINE];
  while (!done)//While not done
  {
    length = getmyline( myline );//Get each line and put it in 'myline' variable, set length with return from getmyline function
    if (length > FOLDAT)//If line length is greater than FOLDLENGTH
      foldLine( myline , length );//Send it to the foldLine function
    else//Else
      printf("%s\n", myline);//print the line
  }
}

void foldLine ( char line[], int length ){
  //printf("%s\n", line);
  int tabs = 0;
  int currentColumn = 0;
  int lastSpace ;
  int i = 0;
  int c;
  int starti;
  for ( ; i < length; i++)//Iterate through the beginning of the line
  {
    if ( line[i] == '\t') ++tabs;//collecting # of tabs
    else break;
  }
  currentColumn = TAB*tabs;//Add tab constant * # of tabs to currentColumn
  starti = i;
  for (i = starti; i < length; i++)//For each character in line
  {
    c = line[i]; //Count each character up to FOLDAT
    if (c == '\t') currentColumn += TAB; //If character is tab add tab const up to next tab stop TODO: Add tab stopping rather than dumb adding of constant
    else if (c == ' ') lastSpace = ++currentColumn; //last space is at inc current column
    else if (FOLDAT > length - i) putchar(c);
    else ++currentColumn; //Else if character is normal increment currentColumn
    if (currentColumn > FOLDAT)//If currentColumn > FOLDAT
      for (int j = starti; j < lastSpace; j++) putchar(line[j]);
      starti = lastSpace + 1;
      putchar('\n'); //print newline
      for (int k = 0; k <= tabs; ++k) putchar('\t');  //Print (# of tabs + 1) to next line
  }
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