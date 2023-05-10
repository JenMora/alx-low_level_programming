#include "main.h"
#include <stdio.h>
int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - a function that returns the natural square root of a number
 * @n:the number
 * Return:0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);

	return (actual_sqrt_recursion(n, 0));
	}
/**
 *actual_sqrt_recursion - recursively finds the natural
 *square root of a number
 *@n: number to calculate the sqaure root of
 *@i: for the loop
 *Return:result
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i *i > n)
	{
		return (-1);
	}
	if (i *i == n)
	{
		return (i);
	}
		return int (actual_sqrt_recursion(n,i + 1));
}

