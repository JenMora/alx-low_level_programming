#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *_strdup - a function that duplicates to new memory space location
 *@str: the char
 *Return: 0
 */
char *_strdup(char *str)
{
	char *n;
	int a, b = 0;
	/*declaration of variables*/
	if (str == NULL)
		return (NULL);
	a = 0;
	/*declare and assign the integer*/
	while (str[a] != '\0')
		a++;
	n = malloc(sizeof(char) * (a + 1));
	/*allocate the memory in heap*/
	if (n == NULL)
		return (NULL);
	/*Return Null if the string is equal to null*/
	for (b = 0; str[b]; b++)
		n[b] = str[b];
	return (n);
	/*return string if int b is equal to 0*/
}
