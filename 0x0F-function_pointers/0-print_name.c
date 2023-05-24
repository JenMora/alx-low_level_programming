#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - a function that prints a name
 * @name: teh name to be printed
 * @f: the function pointer
 * Return: 0 if success
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
