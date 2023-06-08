#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* print_binary -  prints the binary representation of a number
* @n: the unsigned long integer
* Return: 0
*/

void print_binary(unsigned long int n)
{
unsigned long int integer = n;
int bits = 0;
int i;
	  /*for bit iteration*/
if (n == 0)
{
printf("0");
return;
}

while (integer > 0)
{
integer >>= 1;
/*right shift by one bit*/
bits++;
/*increment the bit count*/
}
/*print the binary of the integer*/
for (i = bits - 1; i >= 0; i--)
{
unsigned long int mask = 1UL << i;
/*creating a bit mask by left shifting */
if (n & mask)
/*this checks whether the bit is set*/
printf("1");
else
printf("0");
}
}
