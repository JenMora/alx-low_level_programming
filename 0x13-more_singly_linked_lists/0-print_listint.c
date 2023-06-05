#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h: the head pointer to the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t number_of_nodes = 0;

	while (h)
	{
		number_of_nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (number_of_nodes);
}
