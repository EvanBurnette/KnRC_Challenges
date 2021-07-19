#include <stdio.h>

#define BREAKLENGTH 80
#define MAXLINE 1000
#define TAB 4

int tabs = 0;
int done = 0;
int broken = 0;
int beginLine = 1;

int getLineSlice(char line[])
{
  int length = 0;
  char c;
  while (1)
  {
    c = getchar();
    if (c == '\t' && beginLine)
      ++tabs;
    else
      beginLine = 0;
    if (length > BREAKLENGTH)
    {
      if (!broken)
        ++tabs;
      broken = 1;
      return length;
    }
  }
  if (c == '\n')
  {
    broken = 0;
    tabs = 0;
    beginLine = 1;
  }
  else if (c == EOF)
  {
    done = 1;
  }
  else
    ;
  return length;
}

int main()
{
  int length;
  char line[MAXLINE];
  while (!done)
  {
    length = getLineSlice(line);
    for (int i = 0; i < tabs; i++)
      putchar('\t');
    for (int j = 0; j < length; j++)
      putchar(line[j]);
  }
}
