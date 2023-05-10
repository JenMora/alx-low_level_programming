#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - a function that prints a string, followed by a new line
 * @s: The string to be printed
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
/*print newline when the end of string is reached*/
		_putchar('\n');
	return;
	}

	_putchar(*s);
/*print the current string*/
	_puts_recursion(s + 1);
/*print the string recursely until the end is reached*/
return;
}
