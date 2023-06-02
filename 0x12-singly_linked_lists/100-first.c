#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 * main - a function that prints an output
 *hare - Prints a string before the execution of the main function.
 */
void hare(void)
{
printf("You're beat! and yet, you must allow,");
printf("\nI bore my house upon my back!\n");
}
