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
	int i, lim = 20;
	char c;
	char s[lim]; 
		
	for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;

 	printf("Text input is %s\n",s);
	
	return i;
}
