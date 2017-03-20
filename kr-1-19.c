/******************************************************************************/
// Exercise 1-19. 
// Write a function reverse(s) that reverses the character string s. Use it to 
// write a program that reverses its input a line at a time.
/******************************************************************************/
#include <stdio.h>
#include <string.h>

#define MAXLINE 1000 /* maximum input line length */

/* Test Data
*/

int jbGetline(char line[], int maxline);
void copy(char to[], char from[]);
void revstr(char to[], char from[], int fromlen);

int main()
{
	int len; /* current line length */
	int max; /* maximum length seen so far */
	char line[MAXLINE]; /* current input line */
	char longest[MAXLINE]; /* longest line saved here */
	char reverse[MAXLINE];
	max = 0;
	while ((len = jbGetline(line, MAXLINE)) > 0) {
		if (len > max) {
			max = len;
			copy(longest, line);
		}
		
		revstr(reverse, line, (int) strlen(line));
		printf("%d %s", (int) strlen(reverse), reverse);		
		
	}
	return 0;
}

/******************************************************************************/
//   Function: jbGetLine
//
//   Reads a line into s, return length.
//
//   Parameters:
//     s[] - Current input line.
//     lim - Maximum input line length.
//
//   Returns: Line length
//
/******************************************************************************/
int jbGetline(char s[], int lim)
{
	int c, i;
	for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

/******************************************************************************/
/* copy: copy 'from' into 'to'; assume to is big enough */
/******************************************************************************/
void copy(char to[], char from[])
{
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}

/******************************************************************************/
void revstr(char to[], char from[], int fromlen)
{
	int i, j;
	i = 0;
        j = fromlen - 1;

	while ((to[i] = from[j]) != '\0'){
		++i;
		--j;
	}
}