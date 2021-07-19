#include <stdio.h>
#define TAB 4
#define MAXLINE 1000

int getmyline(char line[]);
int getmyline(char line[])
{
  int length = 0;
  while ((line[length] = getchar()) != EOF && (line[length] != '\n'))
  {
    length++;
  }
  return length;
}

int main()
{
  int currentColumn, length;
  int spaces;
  int done = 0;
  char c;
  char line[MAXLINE];
  while (!done)
  {
    spaces = 0;
    length = getmyline(line);
    currentColumn = 0;
    for (int i = 0; i <= length; i++)
    {
      if ((c = line[i]) == ' ')
      {           //if current character is a space
        spaces++; //count spaces in a row
        if ((spaces + currentColumn) % TAB == 0)
        {                          //if spaces in a row reaches next tab stop
          putchar('\t');            //then print a tab
          currentColumn += spaces; //increment currentColumn by number of spaces
          spaces = 0;              //reset spaces variable
        }
      }
      else if (c == '\t')
        {                //else if character is a tab
          putchar('\t'); //print tab
          currentColumn += TAB; // move current column up to next tabstop
          spaces = 0;    //reset spaces variable
        }
      else if (c == EOF)
        { //else if character is End of File
          for (int s = 0; s < spaces; s++) putchar(' '); //print # of spaces
          spaces = 0;     //reset spaces variable
          done = 1;       //set done to true
        }
      else
        { //else
          for (int s = 0; s < spaces; s++) putchar(' ');   //print # of spaces in a row
          spaces = 0;       //reset spaces variable
          putchar(c); //print current character
          if (c == '\n') currentColumn = 0; //if newline, reset current column
        }
    }
  }
}