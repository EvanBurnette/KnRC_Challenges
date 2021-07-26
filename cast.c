#include <math.h>
//clang cast.c -lm
//fails to link because math is not in standard library and must be flagged explicitly to remind the coder how hard this stuff is for computers (historically)
#include <stdio.h>

int main() {
  int n = 64;
  double n2 = sqrt( (double) n);
  printf("%.1f\n", n2);
}