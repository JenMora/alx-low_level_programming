#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s:the string to be checked
 * Return:0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
/*set base condition*/
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
/*Print the string recursively*/

	return (0);
}
