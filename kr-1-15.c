// print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300

#include <stdio.h>

float FahrToCels(float fahrP);

int main()
{
	float fahr;
	float lower, upper, step;

	lower = 0; 	/* lower limit of temperature scale */
	upper = 300;	/* upper limit */
	step = 20;	/* step size */

	fahr = lower;
	printf("%3s %6s\n", "fahr", "celsius");
	while (fahr <= upper) {
		printf("%3.0f %6.1f\n", fahr, FahrToCels(fahr));
		fahr = fahr + step;
	}
	return 0;
}

float FahrToCels(float fahrP)
{
	return (5.0/9.0) * (fahrP-32.0);
}
