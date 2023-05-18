#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *array_range - a function that creates an array of integers
 *within a specified range
 *@min: the minimum integer range
 *@max: the maximum integer range
 *Return: a pointer, otherwise NULL
 */
int *array_range(int min, int max)
{
	int *arr;
/*Pointer to the array*/
	int a = 0;
/*the loop ounter for array elements*/
	int b = min;
/* Counter fo range values*/

/* Check if the range is invalid (min > max)*/
	if (min > max)
		return (NULL);

/*Calculate the size of the array and allocate memory for it*/
	arr = malloc((max - min + 1) * sizeof(int));

/*Check if the memory allocation was successful*/
	if (arr == NULL)
		return (NULL);

/* Fill the array with values from the range*/
	while (a <= max - min)
	{
		arr[a++] = b++;
/*Assign the current range value to the array element and increment counter*/
	}
/*Return the pointer to the allocated array*/
	return (arr);
}
