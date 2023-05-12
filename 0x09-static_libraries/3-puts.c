#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _puts - prints a string, followed by a new line, to stdout
 *@str:the string
 *
 * Return:0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
