#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *_memset - copy char
 *@s: string
 *@m: character input
 *@n: number of bytes
 *Return: string
 */
char *_memset(char *s, char m, unsigned int n)
{
	    unsigned int a;

		for (a = 0; a < n; a++)
{
			s[a] = m;
}
	return (s);
}

/**
 *_calloc - allocates memory for an array using malloc
 *@nmemb: number of elements
 *@size: bytes
 *Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pointer;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	pointer = malloc(nmemb * size);

	if (pointer == NULL)

	return (NULL);

	_memset(pointer, 0, (nmemb * size));

	return (pointer);
}
