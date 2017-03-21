/******************************************************************************/
// Exercise 1-20. 
// Write a program detab that replaces tabs in the input with the proper number 
// of blanks to space to the next tab stop. Assume a fixed set of tab stops, 
// say every n columns. Should n be a variable or a symbolic parameter?
/******************************************************************************/
#include <stdio.h>
#include <string.h>

#define TABSIZE 8 

/******************************************************************************/
int main()
{
        int c, i;
	char tabstr[TABSIZE];

	for (i = 0; i < TABSIZE; ++i)
		tabstr[i] = 32;
	
        while ((c = getchar()) != EOF) {
                if (c == '\t') {
			printf("%s", tabstr);
                } else
			putchar(c);
	}
        
        printf("\nDone\n");
}