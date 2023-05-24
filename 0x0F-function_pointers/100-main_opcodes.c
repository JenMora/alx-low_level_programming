#include <stdio.h>
#include <stdlib.h>

/**
 *main - a function that prints its own opcodes
 *@argc:argument count
 *@argv:argument array
 *Return:0
 */
int main(int argc, char *argv[])
{
	int byte_count, j;

	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byte_count = atoi(argv[1]);

	if (byte_count < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;

	for (j = 0; j < byte_count; j++)
	{
		if (j == byte_count - 1)
		{
			printf("%02hhx\n", arr[j]);
			break;
		}
		printf("%02hhx ", arr[j]);
	}
	return (0);
}

