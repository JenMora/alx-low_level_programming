#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index-a function that deletes the node at index
 * index of a listint_t linked list
 * @head: pointer to the list
 * @index: index at which the node is to be deleted
 * Return:1 if success, otherwise -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;

	listint_t *temp, *copy = *head;

	if (copy == 0)
		return (-1);

			if (index == 0)
			{
				*head = (*head)->next;
				free(copy);
				return (1);
			}

	for (i = 0; i < (index - 1); i++)
	{
		if (copy->next == 0)
			return (-1);
		copy = copy->next;
	}
	temp = copy->next;
	copy->next = temp->next;
		free(temp);
	return (1);
}
