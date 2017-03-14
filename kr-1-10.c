/* copy input to output; 2nd version */
#include <stdio.h>

int main()
{
        //double nc;
        //for (nc = 0; getchar() != EOF; ++nc);
        //printf("%.0f\n", nc);

        int c, n1, t1, b1;
        n1 = 0;
	t1 = 0;
	b1 = 0;

        while ((c = getchar()) != EOF) {
                if (c == '\n') {
                        ++n1;
			putchar(92);
			putchar('n');
                }
                if (c == '\t') {
                        ++t1;
			putchar(92);
			putchar('t');
                }
                if (c == 92) {
                        ++b1;
			putchar(92);
			putchar(92);			
                }
	}
        
        printf("\nNew Lines %d Tabs %d Blanks %d\n", n1, t1, b1);
}
