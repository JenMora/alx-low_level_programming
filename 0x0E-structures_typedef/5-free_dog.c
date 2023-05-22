#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
#include <string.h>
/**
 *free_dog - frees memory allocated for a struct dog
 *@d: struct dog to free
 *Return: 0
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
