#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _memset - a function that fills memory with a constant byte
 * @s:memory area
 * @b:constant byte
 * @n:number of bytes
 * Return:s
 */
void *_memset(void *s, int b, size_t n)
{
/*take a pointer *ps to the memory area s*/
	char *ps = s;
/*iterate through teh memory using teh pointer ps*/
		while (n > 0)
		{
			*ps = b;
			ps++;
			n--;
/*continue until n is 0*/
		}
/*return to memory area s*/
	return (s);
}
