/* Exercise 1-22. Write a program to "fold" long input lines into two or more shorter lines after the last non-blank character that occurs before the n-th column of input. Make sure your program does something intelligent with very long lines, and if there are no blanks or tabs before the specified column. */

#include <stdio.h>

#define TAB 4
#define MAXLINE 1000
#define FOLDAT 80

int foldLine ( char line[] );
int getmyline ( char line[] );

int main() {
  //Loop through all lines in a file while not done
    //Get each line and put it in 'myline' variable
    //If line length is greater than FOLDLENGTH
      //Send it to the foldLine function
    //Else
      //print the line
}

int foldLine ( char line[] ){
  //Iterate through the beginning of the line, collecting # of tabs
  //Add tab constant * # of tabs to current column
  //When not 
}