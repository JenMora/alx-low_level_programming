#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/*
 *main - Entry point of the code
 *list_len - finds the number of linked list_t list elements.
 *Description:a function that returns the number of
 *elements in a linked list_t list
 *@h: the list_t list
 *Return: 0
 */

size_t list_len(const list_t *h)
{
	size_t nodes;

	nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}

