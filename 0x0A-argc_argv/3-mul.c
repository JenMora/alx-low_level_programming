#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_atoi - converts a string to an integer
 *@s: string to be converted
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int j, k, l, len, m, digit;

	j = 0;
	k = 0;
	l = 0;
	len = 0;
	m = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (j < len && m == 0)
	{
		if (s[j] == '-')
			++k;
		if (s[j] >= '0' && s[j] <= '9')
		{
			digit = s[j] - '0';
			if (k % 2)
				digit = -digit;
			l = l * 10 + digit;
			m = 1;
			if (s[j + 1] < '0' || s[j + 1] > '9')
				break;
			m = 0;
		}
		j++;
	}
	if (m == 0)
		return (0);
	return (l);
}

/**
* main - entry point of the program
* description: a program that multiplies two numbers.
*@argc: number of arguments
*@argv: array of arguments
* Return:0 (success)
*/

int main(int argc, char *argv[])
{
	int result, a, b;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	a = _atoi(argv[1]);
	b = _atoi(argv[2]);
	result = a * b;
	printf("%d\n", result);
	return (0);
}
