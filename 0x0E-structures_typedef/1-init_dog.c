#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - this initializes a variable of type struct dog
 * @d:the variable to be initialized
 * @name: the name of the dog
 * @age:the age of the dog
 * @owner: the dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
