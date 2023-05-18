#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: the unnsigned integer
 * Return: a function that allocates memory using malloc
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;
       
	pointer	= malloc(b);

	if (pointer == NULL)
	{
		exit(98);
	
	}
	else
	{
		return (pointer);
	}
}
