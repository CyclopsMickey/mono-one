/* copy input to output; 2nd version */
#include <stdio.h>
 
int main() 
{
        int c;
        int iEOF;

        printf("%6d\n", EOF);

        while (c = getchar())
                if (c != EOF) {
                        //putchar(c);
                        printf("%6d\n", c);
                } else
                        printf("%6d\n", c);
        return 0;
}