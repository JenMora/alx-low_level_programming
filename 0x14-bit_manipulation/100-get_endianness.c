#include <stdlib.h>
#include "main.h"

/**
 * mamin - entry point of the program
 * get_endianness - a function that checks the endianness.
 * Return:0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int integer_value = 1;

	char *bitwisefun = (char *)&integer_value;

	if (*bitwisefun == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
