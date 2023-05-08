#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: the string
 * @accept: the character to be checked
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int a;
/*declare a variable for the loop*/
	while (*s)
	{
		for (a = 0; accept[a]; a++)
/*start loop*/
		{
			if (*s == accept[a])
/*if the string s is equal the accept*/
				return (s);
/*return the string*/
		}
		s++;
	}
	return ('\0');
/*else if the string is not equal to accept return NULL*/
}
