#include "main.h"
/**
 *print_alphabet_x10-print alphabet ten times to stdout
 *
 * Return:void
 */
void print_alphabet_x10(void)
{
char t;
int i;
i = 0;
while (i < 10)
{
for (t = 'a'; t <= 'z'; t++)
{
_putchar(t);
}
_putchar('\n');
i++;
}
return;
}
