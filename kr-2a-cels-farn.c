// print Celsius-Fahrenheit table for Celsius = 0, 20, ..., 300

#include <stdio.h>

int main() {
	int fahr, celsius;
	int lower, upper, step;

	lower = -17; 	/* lower limit of temperature scale */
	upper = 148;	/* upper limit */
	step = 10;	/* step size */

	celsius = lower;
	while (celsius <= upper) {
		fahr = ((celsius * 9) / 5) + 32;
		printf("%d\t%d\n", celsius, fahr);
		celsius = celsius + step;
	}
	return 0;
}
