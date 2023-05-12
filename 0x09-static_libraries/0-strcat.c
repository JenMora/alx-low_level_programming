#include "main.h"
#include <stdio.h>
/**
 * _strcat - a function that concatenates two strings
 * @dest: the first string
 * @src: the second string
 * Return: *dest
 */
char *_strcat(char *dest, char *src)
{
	char *pointer = dest;
	int x;

	/*pointer to the end of dest*/
	while (*pointer != '\0')
	{
		pointer++;
	}
	/*copy src to dest*/
	for (x = 0; src[x] != '\0'; x++, pointer++)
	{
	*pointer = src[x];
	}
	/*add scr to dest*/
	*pointer = '\0';
	/* Return dest*/
	return (dest);
}
