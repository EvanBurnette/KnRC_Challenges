#include <stdio.h>
float convertToF(float cel);

/* print Fahrenheit-Celcius table
	for fahr = 0, 20, ..., 300; floating-point version */

float convertToF(float cel)
{
	return (9.0/5.0) * cel + 32.0;
}

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = -40;	/* lower limit */
	upper = 100;	/* upper limit */
	step = 10;	/* step size */

	celsius = lower;
	printf("C\tF\n");
	while (celsius <= upper) {
		fahr = convertToF(celsius);
		printf("%3.0f\t%3.0f\n", celsius, fahr);
		celsius += step;
	}
}
