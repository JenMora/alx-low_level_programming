#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat -  a function that concatenates two strings
 * @s1: the first string
 * @s2: teh second string
 * @n: the integer representing the number of bytes(index)
 * Return:NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *m;
size_t size1 = 0;

/*If s1 is NULL, set it to an empty string*/
if (s1 == NULL)
	s1 = "";
/*If s2 is NULL, set it to an empty string*/
if (s2 == NULL)
	s2 = "";

/*Calculate the size of s1*/
size1 = strlen(s1);

/*If n is greater than the size of s2, set n to size2*/
if (n > strlen(s2))
	n = strlen(s2);

/*Allocate memory for the concatenated string*/
m = malloc((size1 + n + 1) * sizeof(char));

/*If memory allocation fails, return NULL*/
if (m == NULL)
	return (NULL);
 /*Copy s1 into the allocated memory*/
strcpy(m, s1);
/*Concatenate n characters from s2 onto p*/
strncat(m, s2, n);
/*Return the pointer to the concatenated string*/
return (m);
}
