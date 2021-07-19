#include <stdio.h>

/* print Fahrenheit-Celcius table
	for fahr = 0, 20, ..., 300 */

int main()
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;	/* lower limit */
	upper = 300;	/* upper limit */
	step = 20;	/* step size */

	int test = 100;

	fahr = lower;
	printf("F\tC\n");
	while (fahr <= upper) {
		celsius = 5 * (fahr-32) / 9;
		printf("%3d %6d\n", fahr, celsius);
		fahr = fahr + step;
	}
	printf("%d\n", test);
}
