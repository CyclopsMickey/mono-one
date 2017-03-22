/******************************************************************************/
// Exercise 1-23. 
// Write a program to remove all comments from a C program. Don't forget to 
// handle quoted strings and character constants properly. C comments don't nest.
/******************************************************************************/
#include <stdio.h>
#include <string.h>

#define BIN 1 /* inside a blank section */
#define BOUT 0 /* outside a blank section */

/******************************************************************************/
int main()
{
        int c, n, i, j, state;
	int idiv, irem;
	double id;
	
	state = BOUT;
	i = 0;
	while ((c = getchar()) != EOF) {
		if (c == '/') {
			if (n = getchar() == '*') {
				state = BIN;
			} else {
				putchar(c);
				putchar(n);
			}
		} else if (c == '*') {
			if (n = getchar() == '/') {
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