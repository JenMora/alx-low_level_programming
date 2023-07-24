#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: the svtring to be checked
 * @accept:source of bytes
 * Return:the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
/*declare a variable to check the length of the substring*/
		int a;
/*declare a variable for the loop*/

	while (*s)
	{
		for (a = 0; accept[a]; a++)
/*start loop*/
		{
			if (*s == accept[a])
/*is the characters of the string s are equal to accept*/
			{
				bytes++;
/*increment the length of teh substring*/
			break;
/*break from  the inner loop*/
			}
		else if (accept[a + 1] == '\0')
/*if the next character is null*/
			return (bytes);
/*return the length of the substring*/
	}
	s++;
/*move to the next character of the string and iterate*/
	}

return (bytes);
/*return the string length*/
}
