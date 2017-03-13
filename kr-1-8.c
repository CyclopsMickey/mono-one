/* copy input to output; 2nd version */
#include <stdio.h>

int main()
{
        //double nc;
        //for (nc = 0; getchar() != EOF; ++nc);
        //printf("%.0f\n", nc);

        int c, n1;
        n1 = 0;

        while ((c = getchar()) != EOF)
                if (c == '\n') {
                        ++n1;
                }
        
        printf("%d\n", n1);
}
