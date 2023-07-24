#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @n:the number of bytes to be copied
 * @src: initial memory area
 * @dest: destination memory area
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
/*declare a variable that will be used for loop counter*/

	unsigned int a;
/*This is a for loop that copies n characters from src to dest*/

	for (a = 0; n > 0; a++, n--)
	{
		dest[a] = src[a];
	}
/*Return pointer to char*/
	return (dest);
}

