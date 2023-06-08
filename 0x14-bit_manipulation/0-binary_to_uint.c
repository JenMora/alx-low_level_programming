#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/*
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b:points to a string of 0 and 1 characters
 * Return:the converted number if success, otherwise 0 if one or more
 * characters exist in the string b that is not 0 or 1 or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int integer = 0;
	int j = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[j] != '\0')
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
		integer  = (integer << 1) + (b[j] - '0');
		j++;
	}
	return (integer);
}

