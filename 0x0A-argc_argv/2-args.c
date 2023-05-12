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
printf("argc %d\n", argc);
printf("You can do anything, but not everything\n");
for (j = 0; j < argc; j++)
{
printf("argv[%d] = %s\n", j, argv[j]);
}
return (0);
}
