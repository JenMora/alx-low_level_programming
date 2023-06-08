#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @index:the index, starting from 0 of the bit you want to get
 * @n:unsigned long integer
 * Return:the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;
/*creating a bit mask for the given index, 1UL stands for unsigned long int*/
	if (index >= sizeof(unsigned long int) * 8)
	{
	return (-1);
	}
/*if error occurs i.e index out of range*/
	return ((n & mask) ? 1 : 0);
/*return the result of the bit at a given index*/
}
