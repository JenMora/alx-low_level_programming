#include <stdlib.h>
#include "main.h"

/*
 *clear_bit-a function that sets the value of a bit to 0 at a given index.
 * @n: Pointer to the number
 * @index: Index of the bit to be cleared.
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
*n &= ~(1 << index);
return (1);
if (index >= (sizeof(n) * 8))
{
return (-1);
}
}
