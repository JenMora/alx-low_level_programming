#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string, in reverse
 * @s: the string
 * Return: 0
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	while (len--)
		putchar(s[len]);
	putchar('\n');
}
