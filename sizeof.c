#include <stdio.h>
#include <limits.h>

int main()
{
	printf("CHAR_BIT\t%d\n", CHAR_BIT);
	printf("int\t\t%lu\n", sizeof(int)*CHAR_BIT);
	printf("char\t\t%lu\n", sizeof(char)*CHAR_BIT);
	printf("long\t\t%lu\n", sizeof(long)*CHAR_BIT);
	printf("double\t\t%lu\n", sizeof(double)*CHAR_BIT);
	printf("float\t\t%lu\n", sizeof(float)*CHAR_BIT);
}
