#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * decsription:a program that prints all arguments it receives
 * @argc: the argument count
 * @argv: the argumnet array
 * Return:0 (success)
 */

int main(int argc, char *argv[])
{
int j;

for (j = 0; j < argc; j++)
{
printf("%s\n", argv[j]);
}
return (0);
}
