/* program to print a histogram of the frequencies of different characters in its input */
#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */
#define ASCII_COUNT 255

// Test Data: This is some text for a test that exemplifies the exasperation of the miasma that unfolds in a gargantuan manner before the multitude

int main()
{
	int c, state, i, j, k, n;
	int nwords[ASCII_COUNT];

	for (i = 0; i < ASCII_COUNT; ++i)
		nwords[i] = 0;
		
	state = OUT;
	i = 0;
	n = 1;
	while ((c = getchar()) != EOF) {
		++nwords[c];
	}
	
	for (j = 1; j < ASCII_COUNT; ++j) {
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
