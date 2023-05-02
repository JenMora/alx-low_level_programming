#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half -  prints half of a string, followed by a new line
 * @str: the string
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int len, start;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
		start = len / 2;
	}
	if (len % 2 == 1)
	{
		start++;
	}

	while (start < len)
	{
	putchar(str[start]);
	start++;
	}
	putchar('\n');
}

