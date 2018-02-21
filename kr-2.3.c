/******************************************************************************/
// Exercise 2-3. 
// Write a function htoi(s), which converts a string of hexadecimal digits
// (including an optional 0x or 0X) into its equivalent integer value. The 
// allowable digits are 0 through 9, a through f, and A through F.
/******************************************************************************/
#include <stdio.h>
#include <string.h>

/******************************************************************************/
int main()
{
	int i, j, lim = 20;
	char c;
	char s[lim]; 
		
	for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;

 	printf("Hex number input is %s\n",s);
	
	return i;
}
