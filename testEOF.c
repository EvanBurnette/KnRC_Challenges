#include <stdio.h>

int main () {
    if (EOF == '\0') printf ("EOF is \\0");
    printf("%c%x\n", EOF, EOF);
    printf("%c%d\n", '\0', '\0');
    printf("%c%d\n", '\n', '\n');
}
