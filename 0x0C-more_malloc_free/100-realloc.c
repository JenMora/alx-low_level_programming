#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 *_realloc -  a funnction that reallocates a memory block using malloc and free
 *@ptr: pointer
 *@old_size: old size of memory
 *@new_size: new size of memory
 *Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *memory_duplicate, *reallocation;
	unsigned int i;

	if (ptr != NULL)
	memory_duplicate = ptr;
	else
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
	free(ptr);
		return (0);
	}
	reallocation = malloc(new_size);
/*check the sucess of malloc*/
	if (reallocation == NULL)
		return (0);
	for (i = 0; i < (old_size || i < new_size); i++)
	{
	*(reallocation + i) = memory_duplicate[i];
	}
	free(ptr);
/*free the allocated memory to the system*/
		return (reallocation);
}
