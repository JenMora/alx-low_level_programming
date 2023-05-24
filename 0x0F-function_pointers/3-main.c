#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point of the program
 * @argc: the argument count
 * @argv:arguments array
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	char s;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);
	
	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	s = *argv[2];

	if ((s == '%' || s == '/') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = func ( arg1, arg2);
	printf("%d\n", result);
	return (0);
}
