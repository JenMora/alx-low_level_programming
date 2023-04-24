#include <stdio.h>
/**
 * main- Entry point
 * Description- Prints a random positive or negative number
 * Return: 0 (success)
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	putchar(d);
	if (d != '9')
	{
	putchar(',');
	putchar(' ');
	}
	return (0);
}
