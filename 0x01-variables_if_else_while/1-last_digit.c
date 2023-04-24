#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Description - A program that will assign a random number to the variable
 * Return - 0 (success)
 */
int main()
	int n;
	int l;
{

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (l > 5)
	{
		printf("l of %d is %d and is greater than 5\n", n, l);
	}
	else if (l == 0)
	{
		printf("l  of %d is %d and is 0\n", n, l);
	}
	else if (l < 6 && l != 0)
	{
		printf("l of %d and %d and is less than 6 and not 0\n", n, l);
	}
	return (0);
}
