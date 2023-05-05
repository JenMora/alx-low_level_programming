#include "main.h"
#include <stdio.h>
/**
 * cap_string - a function that capitalizes all words of a string
 * @str: the string to bbe capitalized
 * Return:str
 */
char *cap_string(char *str)
{
	int len = 0;
/*counts the string characters*/
	while (str[len] != '\0')
		if (str[0] >= 97 && str[0] <= 122)
		{
			str[0] = str[0] - 32;
		}
/*-32 changes the charecters to uppercase in ASCII*/

	if (str[len] == ' ' || str[len] == '\t' || str[len] == '\n'
	|| str[len] == ',' || str[len] == ';' || str[len] == '.'
	|| str[len] == '.' || str[len] == '?' || str[len] == ')'
	|| str[len] == '(' || str[len] == '{' || str[len] == '}'
	|| str[len] == '"' || str[len] == '!')
	{
		if (str[len + 1] >= 97 && str[len + 1] <= 122)
		{
			str[len + 1] = str[len + 1] - 32;
		}
	}
	len++;
	return (str);
}



