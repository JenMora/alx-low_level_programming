#include "main.h"
#include <stdlib.h>

/**
 *str_concat - a function that concatenates two strings
 *@s1: first string
 *@s2: second string
 * Return: s1 and s2 concatenated
 */
char *str_concat(char *s1, char *s2)

{
	char *concat;
	int a, b;
	/*a and b for iteration*/
	/*declaration of variables*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	a = b = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	concat = malloc(sizeof(char) * (a + b + 1));
	/*allocate memory*/

	if (concat == NULL)
		return (NULL);
	/*retrun Null if the string concatenated is equal to Null*/
	a = b = 0;
	/*assign integers a and b*/
	while (s1[a] != '\0')
	{
		concat[a] = s1[a];
		a++;
		/*concatenate the strings while iterating a*/
	}
	while (s2[b] != '\0')
	{
		concat[a] = s2[b];
		a++, b++;
		/*concatenate the strings while iterating b*/
	}
	concat[a] = '\0';
	return (concat);
}
