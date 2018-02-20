/******************************************************************************/
// Exercise 2-01. 
// Write a program to determine the ranges of char, short, int, and long
// variables, both signed and unsigned, by printing appropriate values from 
// standard headers and by direct computation. Harder if you compute them: 
// determine the ranges of the various floating-point types.
/******************************************************************************/
#include <stdio.h>
#include <string.h>

#define BIN 1 /* inside a blank section */
#define BOUT 0 /* outside a blank section */

/******************************************************************************/
int main()
{
	int c, n, state;
	
	state = BOUT;
	while ((c = getchar()) != EOF) {
		if (c == '/') {
			if ((n = getchar()) == '*') {
				state = BIN;
			} else {
				putchar(c);
				putchar(n);
			}
		} else if (c == '*') {
			if ((n = getchar()) == '/') {
				state = BOUT;
			} else {
				putchar(c);
				putchar(n);
			}
		} else
			putchar(c);
	}
	
	printf("\nDone\n");
}