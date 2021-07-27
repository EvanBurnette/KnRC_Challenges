/* ex 2-9: faster bitcount */
#include <stdio.h>
int bitcount( unsigned num );
int fasterbitcount( unsigned num );

int main () {
  printf("%d\n", bitcount( 0xF0F0 ));
  printf("%d\n", fasterbitcount( 0xF0F0 ));
  return 0;
}

int bitcount( unsigned num ){
  int count = 0;
  for ( ; num != 0 ; num >>= 1) if ( num & 1) count++;
  return count;
}

int fasterbitcount( unsigned num ) {
  int count = 0;
  for ( ; num != 0; num &= (num - 1)) count++; // num - 1 creates a zero in the position of the last 1 of num therefore it only counts 1's and doesn't stop to check any zeroes
  return count;
}
