#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - a function that prints a string in reverse
 * @s: the string to be printed
 * Return:0
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
/*set the base condition*/
{
_putchar('\n');
/*print new line at the end of teh string*/
return;
}
_print_rev_recursion(s + 1);
/*print in reverse*/
_putchar(*s);
/*prints the current character*/
}
