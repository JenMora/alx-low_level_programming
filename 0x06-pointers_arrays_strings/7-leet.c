#include "main.h"
#include <stdio.h>
/**
 * leet - a function that encodes a string into 1337
 * letters a and A should be replaced by 4
 * letters e and E should be replaced by 3
 * letters o and O should be replaced by 0
 * letters t and  should be replaced by 7
 * letters l and L should be replaced by 1
 * @x:the string
 * Return: x
 */
char *leet(char *x)
{
	int len;
	int count;
	char leet_letters[] = "aAeEoOtTiL";
	char leet_num[] = "4433007711";
/*scanning through the string x*/
	len = 0;
	while (x[len] != '\0')
/*find leet letter*/
	{
		count = 0;
	while (count < 10)
	{
		if (leet_letters[count] == x[len])
		{
			x[len] = leet_num[count];
		}
		count++;
	}
		len++;
	}
	return (x);
}

