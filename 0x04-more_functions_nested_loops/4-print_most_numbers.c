#include "main.h"
#include <stdio.h>

/**
 *print_most_numbers- prints the numbers, from 0 to 9, followed by a new line.
 *Return:0
 */
void print_most_numbers(void)
{
char c = 0;
while (c <= 9)
{
if (c != 2 && c != 4)
{
_putchar('0' + c);
}
c++;
}
_putchar('\n');
return;
}
