#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - a function that returns the length of a string
 * @s:the character
 * Return: 0
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
