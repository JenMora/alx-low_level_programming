#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry poinbt of the program
 * description: a program that prints its name, followed by a new line
 * @argc: argument counter
 * @argv: argument array
 * Return:0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
		return (0);
}
