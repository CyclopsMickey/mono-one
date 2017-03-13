// print Celsius-Fahrenheit table for fahr = -17, 10, ..., 120

#include <stdio.h>

int main() {
	float fahr, celsius;
	float lower, upper, step;

	lower = -20; 	/* lower limit of temperature scale */
	upper = 200;	/* upper limit */
	step = 10;	/* step size */

	celsius = lower;
	while (fahr <= upper) {
		fahr = ((celsius/5.0)*9.0) + 32.0;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
	return 0;
}
