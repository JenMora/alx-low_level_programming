#include <stdio.h>
/**
 * main- Entry point
 * Description- Prints a random positive or negative number
 * Return: 0 (success)
 */
int main(void)
{
	char c;
	int i;

	for (i = '0'; i <= '9'; i++)
	putchar(i);
	for (c = 'a'; c <= 'f'; c++)
	putchar(c);
	putchar('\n');
	return (0);
}
