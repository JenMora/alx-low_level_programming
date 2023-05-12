#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the program
 * description:  a program that prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument array
 * Return:0
 */
int main(int argc, char *argv[])
{
	(void) argv;
/*avoid argv in this program*/
	printf("%d\n", argc - 1);
		return (0);
}
