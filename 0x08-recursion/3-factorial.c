#include "main.h"
#include <stdio.h>

/**
 * factorial - a function that returns the factorial of a given number
 * @n: the number
 * Return:0
 */
int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	else if (n >= 0 && n <= 1)
	{
		return (1);
	}
	else
	{
		n *= factorial(n - 1);
	}
	return (n);
}
