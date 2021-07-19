/* Exercise 1-22. Write a program to "fold" long input lines into two or more shorter lines after the last non-blank character that occurs before the n-th column of input. Make sure your program does something intelligent with very long lines, and if there are no blanks or tabs before the specified column. */

#include <stdio.h>

#define TAB 4
#define MAXLINE 1000
#define FOLDAT 80

void foldLine ( char line[] );
int getmyline ( char line[] );

int main() {
  //Loop through all lines in a file while not done
    //Get each line and put it in 'myline' variable, set length with return from getmyline function
    //If line length is greater than FOLDLENGTH
      //Send it to the foldLine function
    //Else
      //print the line
}

void foldLine ( char line[] ){
  //Iterate through the beginning of the line, collecting # of tabs
  //Add tab constant * # of tabs to currentColumn
  //When char c is not a tab, turn begin line tab counting off
  //For each character in line
    //Store index start position
    //Count each character up to FOLDAT
    //If character is tab
      //Add tab const up to next tab stop
    //Else if character is normal
      //Increment currentColumn
    //When currentColumn > 80
      //while character is not a space or a tab
        //Decrement index
        //Read in last character
      //Print characters from index start up to index
      //Print newline + (# of tabs + 1) to next line
      //Set currentColumn to # of tabs*tab constant
}
int done = 0;

int getmyline() {
  char c;
  int l = 0;
  while ( ((c = getchar()) != EOF) && c != '/n'){
    ++l;
  }
  if (c = EOF) done = 1;
  return l;
}