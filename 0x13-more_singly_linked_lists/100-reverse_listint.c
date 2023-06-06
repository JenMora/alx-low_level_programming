#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint-a function that reverses a listint_t linked list
 * @head: the head pointer to the list
 * Return:a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *forward, *reverse;

	if (head == 0 || *head == 0)
	{
		return (0);
	}
	reverse = 0;

	while ((*head)->next != 0)
	{
		forward = (*head)->next;
		(*head)->next = reverse;
		reverse = *head;
		*head = forward;
	}
	(*head)->next = reverse;
	return (*head);
}
