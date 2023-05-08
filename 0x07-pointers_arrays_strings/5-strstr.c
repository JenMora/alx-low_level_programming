#include "main.h"
#include <stdio.h>

/**
 * _strstr - a function that locates a substring
 * @haystack: the string to be searched
 * @needle: the srtring to be searched
 * Return:  a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
while (haystack)
{
	char *h = haystack;
	char *n = needle;
/*check whether the characters match*/
	while (*h && *n && *h == *n)
	{
		h++;
		n++;
	}
/*check for the sub string*/
	if (*n == '\0')
	{
	return (haystack);
	}
	haystack++;
}
return (NULL);
}

