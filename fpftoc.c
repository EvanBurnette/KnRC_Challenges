#include <stdio.h>

/* print Fahrenheit-Celcius table
	for fahr = 0, 20, ..., 300; floating-point version */

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;	/* lower limit */
	upper = 300;	/* upper limit */
	step = 20;	/* step size */

	fahr = lower;
	printf("F\tC\n");
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f\t%f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
