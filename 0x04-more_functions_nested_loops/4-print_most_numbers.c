#include "main.h"
#include <stdio.h>

/**
 *print_numbers - prints numbers from 0 to 9
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
