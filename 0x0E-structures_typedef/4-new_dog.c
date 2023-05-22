#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *new_dog - a function that creates a new dog
 *@name: a string 'name'
 *@age: a float 'age'
 *@owner: a dog 'owner'
 *Return: returns a pointer to a struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int a = 0, b = 0;
dog_t *newDog;
newDog = malloc(sizeof(dog_t));
if (newDog == 0)
return (NULL);
newDog->age = age;
for (a = 0, b = 0; name[a] != '\0'; a++)
b++;
newDog->name = malloc(sizeof(char) * (b + 1));
if (newDog->name == 0)
{
free(newDog);
return (0);
}
for (a = 0; 1 ; a++)
{
(*(newDog->name + a)) = name[a];
if (name[a] == '\0')
break;
}
for (a = 0, b = 0; owner[a] != '\0'; a++)
b++;
newDog->owner = malloc(sizeof(char) * (b + 1));
if (newDog->owner == 0)
{
free(newDog);
free(newDog->name);
return (0);
}
for (a = 0; 1 ; a++)
{
(*(newDog->owner + a)) = owner[a];
if (owner[a] == '\0')
break;
}
return (newDog);
}
