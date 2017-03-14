/* copy input to output; 2nd version */
#include <stdio.h>

#define SPACE 32 /* ASCII Space */
#define INS   1  /* inside a word */
#define OUTS  0  /* outside a word */

int main()
{
        int c, s;

	s = OUTS;
        while ((c = getchar()) != EOF) {
		if (c == 32) {
			if (s == OUTS) {	
				s = INS;
				putchar(c);
			}	
		} else if (c != SPACE) {
			s = OUTS;
			putchar(c);
		}
	}        
}
