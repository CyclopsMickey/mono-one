// print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300
// Cyclops Mickey 2017
// Another update test
#include <stdio.h>

int main() {
	int fahr, celsius;
	int lower, upper, step;

	lower = 0; 	/* lower limit of temperature scale */
	upper = 300;	/* upper limit */
	step = 20;	/* step size */

	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr-32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
	return 0;
}
