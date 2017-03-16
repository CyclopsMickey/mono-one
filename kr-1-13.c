/* Records word size and prints a histogram of sizes */
#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

// Test Data: This is some text for a test that exemplifies the exasperation of the miasma that unfolds in a gargantuan manner before the multitude

int main()
{
	int c, state, i, j, k, n;
	int nwords[15];

	for (i = 0; i < 15; ++i)
		nwords[i] = 0;
		
	state = OUT;
	i = 0;
	n = 1;
	while ((c = getchar()) != EOF) {
		//putchar(c);
		if (c == ' ' || c == '\n' || c == '\t'){
			state = OUT;
			if (n < 15) 
				++nwords[n];	
			n = 1;
                        ++i;
		} else if (state == OUT) {
			state = IN;
		} else ++n;
	}
	for (j = 1; j < 15; ++j) {
		if (nwords[j] > 0) {
			printf("%2d ", j);
                	//printf("%2d", nwords[j]);
                	for (k = 0; k < nwords[j]; ++k)
                        	printf("-");
                	printf("\n");
		}
        }
        printf("\n");
}
