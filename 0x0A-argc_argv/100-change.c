#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *main - entry p[oint of teh programk
 *Description: prints the minimum number of coins to
 *make change for an amount of money
 *@argc:argument count
 *@argv:argument array
 *Return: 0 (Success) otherwise 1
 */
int main(int argc, char *argv[])
{
	int num_a, i, result;

	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num_a = atoi(argv[1]);
	result = 0;
	if (num_a < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && num_a >= 0; i++)
	{
		while (num_a >= coins[i])
		{
			result++;
			num_a -= coins[i];
		}
	}
	printf("%d\n", result);
	return (0);
}

