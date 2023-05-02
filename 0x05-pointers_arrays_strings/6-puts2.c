#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - a function that prints every other character of a string
 * @str:the string
 *
 * Return: 0
 */
void puts2(char *str)
{
int a = 0;
while (str[a] != '\0')
{
	if (a % 2 == 0)
{
putchar(str[a]);
}
a++;
}
putchar('\n');
}

