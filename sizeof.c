#include <stdio.h>
#include <limits.h>

int main()
{
	printf("CHAR_BIT\t%d\t%u\n", CHAR_BIT, UCHAR_MAX);
	printf("char\t\t%llu\n", sizeof(char)*CHAR_BIT);
	printf("short\t\t%llu\t\t%d\n", sizeof(short)*CHAR_BIT, SHRT_MAX);
	printf("int\t\t%llu\t\t%d\n", sizeof(int)*CHAR_BIT, INT_MAX);
	printf("long\t\t%llu\t\t%lu\n", sizeof(long)*CHAR_BIT, LONG_MAX);
	printf("unsigned int\t%llu\t\t%u\n", sizeof(unsigned int)*CHAR_BIT, UINT_MAX);
	printf("double\t\t%llu\n", sizeof(double)*CHAR_BIT);
	printf("float\t\t%llu\n", sizeof(float)*CHAR_BIT);
}
