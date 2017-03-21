/******************************************************************************/
// Exercise 1-21. 
// Write a program entab that replaces strings of blanks by the minimum number 
// of tabs and blanks to achieve the same spacing. Use the same tab stops as 
// for detab. When either a tab or a single blank would suffice to reach a tab 
// stop, which should be given preference?
/******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <math.h>

#define BIN 1 /* inside a blank section */
#define BOUT 0 /* outside a blank section */
#define TABSIZE 3 

/******************************************************************************/
int main()
{
        int c, i, j, state;
	int idiv, irem;
	double id;
	
	state = BOUT;
	i = 0;
	while ((c = getchar()) != EOF) {
		if (c == 32) {
			state = BIN;
                        ++i;
		} else {
			state = BOUT;
			idiv = 0;
			irem = 0;
			
			if (i > 0) {
				idiv = (int) modf((i / 3), &id);
				irem = i - (idiv * 3);
				/* Do the integer part by inserting tabs */
				for ( j = 0; j < idiv; ++j ) {
					putchar('\t');
				}
				/* Do the remainder part in spaces only */
				for ( j = 0; j < irem; ++j ) {
					putchar(32);
				}
				putchar(c);
			} else
				putchar(c);
			i = 0;
		}
	}
	
        printf("\nDone\n");
}