#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *free_grid - a function that frees a 2 dimensional grid
 *previously created by alloc_grid function.
 *@height: the height dimension of the grid
 *@grid:  the two dimensional grid
 *Return:0
 */
void free_grid(int **grid, int height)

{
/*declare the variable for iteration*/
	int b;

	for (b = 0; b < height; b++)
/*if b is 0 and the b is less than the height*/
	{
		free(grid[b]);
/*free the allocated memmory*/
	}
	free(grid);
}
