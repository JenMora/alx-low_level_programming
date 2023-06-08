#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you
 *would need to flip to get from one number to another
 *@m:unsigned long int m
* @n:unsigned long int n
* Return:0
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int iterate = 0;
	unsigned long int X_result = m ^ n;

while (X_result != 0)
{
iterate += (X_result & 1);
X_result >>= 1;
}
return (iterate);
}
