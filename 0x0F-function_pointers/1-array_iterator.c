#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - a function that executes a function given as
 * a parameter on each element of an array
 * @array: the array elements
 * @size: the size of the array
 * @action: the function pointer used
 * Return: 0 if sucess
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	/* declare an integer a for iteration*/
	unsigned int a;

	if (!array || !action)
		return;
	for (a = 0; a < size; a++)
		action(array[a]);
}
