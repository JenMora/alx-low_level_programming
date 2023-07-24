#include "main.h"
#include <stdio.h>
/**
 * _strncat - a function that concatenates two strings
 *@dest: String
 *@src:another string
 *@n:the integer
 *Return:dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int pointer, y;
/*y is teh counter of n bytes of src to be cat...*/
/*pointer is the length of *dest*/
/*move pointer to dest*/
	pointer = 0;

	while (dest[pointer] != '\0')
	{
	pointer++;
	}
 /*copy src to dest*/
	for (y = 0; y < n && src[y] != '\0'; y++, pointer++)
	{
	dest[pointer] = src[y];
	}
	dest[pointer] = '\0';
/*return dest*/
	return (dest);
}
