#include "main.h"
#include <stdlib.h>

/**
 *create_array - a function that creates an array of chars
 *and initializes it with a specific char
 *@c: char to assign
 *@size: size ofthe array
 *Return: pointer to arra, otherwise NULL
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int a;
/*Declare the local variables*/
	s = malloc(sizeof(char) * size);
/*allocate memory*/
	if (s == NULL || size == 0)
		return (NULL);
/*Return NULL if size is equal to 0 and the string is equal to NULL*/
	for (a = 0; a < size; a++)
		s[a] = c;
	return (s);
}

