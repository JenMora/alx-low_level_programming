#include "main.h"
#include <stdio.h>
/**
 * _strncpy - a function that copies a string.
 * @dest:a string
 * @src:another string
 * @n: the number of bytes
 * Return:dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int y = 0;

/*for loop copies the characters from the src to dest*/
	for (y = 0; y < n && src[y] != '\0'; y++)
	{
		dest[y] = src[y];
	}
/*for loop fills any remaining characters in dest with null*/
	for (; y < n; y++)
	{
		dest[y] = '\0';
	}
/*return dest*/
	return (dest);
}
