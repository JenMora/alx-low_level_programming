#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- Entry point
 * Description- Prints a random positive or negative number
 * Return: 0 (success)
 */
int main(void)
{
	int n, ld;
       
	n = 98;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
		printf("ld of %d is %d and is greater than 5\n", n, ld);
	}
	else if (ld == 0)
	{
		printf("ld  of %d is %d and is 0\n", n, ld);
	}
	else if (ld < 6 && ld != 0)
	{
		printf("ld of %d and %d and is less than 6 and not 0\n", n, ld);
	}
	return (0);
}
