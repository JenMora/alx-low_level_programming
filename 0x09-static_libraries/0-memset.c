#include "main.h"
#include <stdio.h>
/**
 * _memset - a function that fills memory with a constant byte
 * @s:memory area
 * @b:constant byte
 * @n:number of bytes
 * Return:s
 */
char *_memset(char *s, char b, unasigned int n)
{
	unasigned int i;
/*take a pointer *ps to the memory area s*/
/*iterate through teh memory using teh pointer ps*/
		for (i = 0; i < n; i++)
		{
			s[i] = b;
		}
/*return to memory area s*/
	return (s);
}
