#include "main.h"
#include <stdio.h>

/**
 * swap_int -  that swaps the values of two integers.
 * @a: first integer to be swapped
 * @b: second integer to be swapped
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int swap;
swap = *a;
*a = *b;
*b = swap;
}
