#include "main.h"
#include <stdio.h>

/**
 * swap_int -  that swaps the values of two integers.
 * @a: first integer
 * @b: second integer
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int swap;
swap = *a;
*b = *a;
*b = swap;
}
