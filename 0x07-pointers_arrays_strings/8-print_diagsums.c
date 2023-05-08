#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_diagsums - a function that prints the sum of the
 * two diagonals of a square matrix of integers
 * @a: the string
 * @size: the size of the integer
 * Return:0
 */

void print_diagsums(int *a, int size)
{
int c, b, y;

c = 0;
b = 0;

for (y = 0; y < size; y++)
c = c + a[y * size + y];
for (y = size - 1; y >= 0; y--)
{
b += a[y * size + (size - y - 1)];
}
printf("%d, %d\n", c, b);
}
