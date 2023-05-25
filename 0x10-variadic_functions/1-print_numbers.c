#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers
 * @separator:the string to be printed between numbers
 * @n:the number of integers passed to the function
 * @...: the numbers to be printed
 * Return:0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list printednumbers;

		unsigned int i;

		i = 0;

va_start(printednumbers, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(printednumbers, int));
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");

va_end(printednumbers);
}
