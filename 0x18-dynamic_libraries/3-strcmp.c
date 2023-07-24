#include "main.h"
#include <stdio.h>
/**
 *_strcmp - a function that compares two strings
 *@s1:a string
 *@s2:another string
 *Return:(s1[y]-s2[y])
 */
int _strcmp(char *s1, char *s2)
{
int y, x;
/*y counts while x compares value*/
	y = 0;

while (s1[y] == s2[y] && s1[y] != '\0')
{
	y++;
}
	x = s1[y] - s2[y];

	return (x);
}
