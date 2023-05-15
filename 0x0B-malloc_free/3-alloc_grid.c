#include "main.h"
#include <stdlib.h>
/**
*alloc_grid - a function that returns a pointer to a
*2 dimensional array of integers.
*@width: the width input
*@height: the height input
*Return: NULL
*/
int **alloc_grid(int width, int height)
{
int **d;
int a, b;
/*declare the variables*/
if (width <= 0 || height <= 0)
return (NULL);
/*return null if both width and height are equal to 0*/
d = malloc(sizeof(int *) * height);
/*allocate memory for the height*/
if (d == NULL)
return (NULL);
for (a = 0; a < height; a++)
/*if a = 0 and a is the parameter of height, iterate a*/
{
d[a] = malloc(sizeof(int) * width);
/*allocate memory for the width*/
if (d[a] == NULL)
/*if d index a = 0 return null*/
{
for (; a >= 0; a--)
free(d[a]);
free(d);
/*free the allocated memory*/
return (NULL);
}
}
for (a = 0; a < height; a++)
{
for (b = 0; b < width; b++)
d[a][b] = 0;
}
return (d);

}
