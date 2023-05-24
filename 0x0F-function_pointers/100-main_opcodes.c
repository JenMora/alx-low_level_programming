#include <stdio.h>
#include <stdlib.h>

/**
 *main - a program that prints its own opcodes
 *@argc:command-line arguments count
 *@argv: array of strings
 *Return:0
 */
int main(int argc, char *argv[])
{
	int a, b;

	char *s;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	s = (char *) main;
	for (a = 0; a < b; a++)
	{
		if (a == b - 1)
		{
			printf("%02hhx\n", s[a]);
			break;
		}
		printf("%02hhx ", s[a]);
	}
	return (0);
}
