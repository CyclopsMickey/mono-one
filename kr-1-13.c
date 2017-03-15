/* count digits, white space, others */
#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

int main()
{
	int c, state, i, j, k, n;
	int nwords[50];

	state = OUT;
	i = 0;
	n = 1;
	while ((c = getchar()) != EOF) {
		//putchar(c);
		if (c == ' ' || c == '\n' || c == '\t'){
			state = OUT;
			nwords[i] = n;
			n = 1;
                        ++i;
			//putchar(10);
		} else if (state == OUT) {
			state = IN;
		} else ++n;
	}
	for (j = 0; j < i; ++j) {
                for (k = 0; k < nwords[j]; ++k)
                        printf("-");
                printf("\n");
        }
        printf("\n");
}
