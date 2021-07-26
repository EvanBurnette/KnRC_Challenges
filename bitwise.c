/* Bitwise exercises from chapter 2 */
#include <stdio.h>
#define SHORT_BITS 16

unsigned short setbits(unsigned short x, int p, int n, unsigned short y);
unsigned short invert( unsigned short x, int p, int n );
unsigned short rightrot(unsigned short x, int n);

int main(){
  unsigned short x = 0xFFFF;
  unsigned short y = 0x1234;
  printf("x is %X\n", x);
  printf("y is %X\n", y);
  printf("setbits(x, 8, 4, y) is %X\n", setbits(x, 8, 4, y));
  printf("invert(x, 8, 4) is %X\n", invert(x, 8, 4));
  printf("rightrot(y, 4) is %X\n", rightrot(y, 4));
}

unsigned short setbits(unsigned short x, int p, int n, unsigned short y) {
  x = x & ~(~(~0<<n) << (p-n)); //zero n bits starting from p
  y = (~(~0<<n) & y) << (p - n); //move n bits of y into position p
  x = y | x; //set y's moved bits over x's zeroed bits
  return x;
}

unsigned short invert( unsigned short x, int p, int n ){
  unsigned short y = ~x;
  return setbits(x, p, n, y);
}

unsigned short rightrot(unsigned short x, int n) {
  return ((x >> n) | (x << (SHORT_BITS - n)));
}