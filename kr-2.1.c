/******************************************************************************/
// Exercise 2-1. 
// Write a program to determine the ranges of char, short, int, and long 
// variables, both signed and unsigned, by printing appropriate values from 
// standard headers and by direct computation. Harder if you compute them: 
// determine the ranges of the various floating-point types.
/******************************************************************************/
#include <stdio.h>
#include <string.h>

/******************************************************************************/
int main()
{
	printf("The size of char is %d\n", sizeof(char));
	printf("The size of short is %d\n", sizeof(short));
	printf("The size of integer is %d\n", sizeof(int));
	printf("The size of long is %d\n", sizeof(long));
}