#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node
 * of a listint_t linked list
 * @head:pointer to the head of the list
 * @index:the index to be returned
 * Return:index, otherwise 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == 0)
			return (0);
		head = head->next;
	}
	return (head);
}
