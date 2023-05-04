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
	/*pointer to the end of dest*/
	while (*pointer != '\0')
	{
		pointer++;
	}
	/*copy src to dest*/
	while (*src != '\0')
	{
		*pointer = (*src);
	}
	/*Add terminating null byte*/
	*pointer = '\0';
	putchar('\n');
	/* Return dest*/
	return (dest);
}
