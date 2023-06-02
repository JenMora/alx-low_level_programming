#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - a function that prints anything
 *  @format: a list of types of arguments passed to the function
 *  Return: no return
 */
void print_all(const char * const format, ...)
{
	va_list printanything;
	unsigned int i = 0, a = 0, b = 0;
	char *s;
	const char t_arg[] = "cifs";

va_start(printanything, format);
while (format && format[i])
{
while (t_arg[a])
{
if (format[i] == t_arg[a] && b)
printf(",");
break;
a++;
switch (format[i])
{
case 'c':
printf("%c", va_arg(printanything, int));
b = 1;
break;
case 'i':
printf("%d", va_arg(printanything, int));
b = 1;
break;
case 'f':
printf("%f", va_arg(printanything, double));
b = 1;
break;
case 's':
s = va_arg(printanything, char *);
b = 1;
default:
}
if (!s)
printf("(nil)");
printf("%s", s);
i++;
}
printf("\n");
va_end;
}
