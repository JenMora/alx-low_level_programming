#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: one of the parameters
 * Return: 0 if n == 0, otherwise sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sumlist;

	unsigned int a;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(sumlist, n);
	for (a = 0; a < n; a++)
		sum += va_arg(sumlist, int);
	va_end(sumlist);
return (sum);
}
