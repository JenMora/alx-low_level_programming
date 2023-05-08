#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strchr -  a function that locates a character in a string
 * @s: the string to be searched
 * @c:the character to be searched
 * Return: a pointer if c is found, otherwise NULL
 */
char *_strchr(char *s, char c)
{
	int a;
/*declare a variable to be used as a loop counter */
	for (a = 0; s[a] >= '\0'; a++)
/*start the loop to iterate through string s*/
	{
		if (s[a] == c)
/*check if characters within the string matches c*/
			return (s + a);
/* if character is found return character to current index*/
	}
	return ('\0');
/*if character not found return null*/
}
