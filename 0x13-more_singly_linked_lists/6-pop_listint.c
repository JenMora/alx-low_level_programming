#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *pop_listint-a function that deletes the head node of a listint_t
 *linked list, and returns the head node’s data (n)
 *@head: the pointer to the list
 *Return:the head node’s data (n), otherwise 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp, n;

	if (head == 0)
	{
		return (0);
	}
	else
	temp = *head;
	n = (*head)->next;
	*head = (*head)->next;
	free(temp);
	return (0);
}
