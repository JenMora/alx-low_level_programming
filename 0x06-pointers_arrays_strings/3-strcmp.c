#include "main.h"
#include <stdio.h>
/**
 *_strcmp( - a function that compares two strings
 *@s1:a string
 *@s2:another string
 *Return:(s1[y]-s2[y])
 */
int _strcmp(char *s1, char *s2)
{
int y = 0;
while (s1[y] == s2[y])
{
	if  (s1[y] != '\0')
	{
		return (0);
	}
	y++;
}
	return (s1[y] - s2[y]);
}
