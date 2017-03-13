/* copy input to output; 2nd version */
#include <stdio.h>
 
int main() 
{
        int c;

        c = getchar();
        if (c == 'x') { c = EOF; }
        while (c != EOF) {
                printf("%3d\n", c);
                c = getchar();
                if (c == 'x') c = EOF;
        }
        
        printf("%3d\n", c);
        return 0;
}