#include <stdio.h>

int main () {
  printf("%X\n", 0x0A & 6);
  printf("%X\n", 0x0A | 6);
  printf("%X\n", 0x0A ^ 6);
  printf("%X\n", 0x0A << 6);
  printf("%X\n", 0x0A >> 6);
  printf("%X\n", -0x0A);
  printf("\n");
  printf("%X\n", 0xFF & 0177);
  printf("%d\n", -0x01 >> 8); //Why is output -1?
  printf("%X\n", ~1); //1's complement aka NOT
  printf("%X\n", -1); //2's complement
  char n = 0;
  printf("%X\n", ~(~n<<4)); //1's complement shifted for rightmost bitmask
  printf("%o\n", 070 & (070 - 1));

}