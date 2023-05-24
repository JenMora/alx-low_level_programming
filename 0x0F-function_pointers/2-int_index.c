#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - afunction that searches for an integer
 * @size: the number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 * @array: the array to be checked
 * Return: returns the index of the first element for
 * which the cmp function does not return 0 if sucess, otherwise -1
 * or if size is negative.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
/*declare integer a for iteration*/
	int a;

	if (array && cmp)
	{
		for (a = 0; a < size; a++)
		{
			if (cmp(array[a]) != 0)
				return (a);
		}
	}
	return (-1);
}
