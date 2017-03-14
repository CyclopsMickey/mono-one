/* copy input to output; 2nd version */
#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

int main()
{
	int c, state;
	state = OUT;
	while ((c = getchar()) != EOF) {
		putchar(c);
		if (c == ' ' || c == '\n' || c == '\t'){
			state = OUT;
			putchar(10);
		} else if (state == OUT) {
			state = IN;
		}
	}
}
