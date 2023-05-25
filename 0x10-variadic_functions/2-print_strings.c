#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings
 * @separator: teh string to be printed  between strings
 * @n: the number of strings passed to teh function
 * Return: no return
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list printedstrings;

	unsigned int i;

	char *str;

	va_start(printedstrings, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(printedstrings, char *);
		if (str)
			printf("%s", str);
		else

		printf("(nil)");

		if (i < n - 1)
		if (separator)

		printf("%s", separator);
	}
		printf("\n");
		va_end(printedstrings);
}
