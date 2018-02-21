/******************************************************************************/
// Exercise 2-2. 
// Write a loop equivalent to the for loop above without using && or ||.
//
//  for (i=0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
//  s[i] = c;
//
/******************************************************************************/
#include <stdio.h>
#include <string.h>

/******************************************************************************/
int main()
{
	int c, i, lim;
	char s[10]; 
		
	for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;

	s[i] = '\0';
	return i;
}
