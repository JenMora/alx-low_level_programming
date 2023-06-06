#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: the header pointer to the list
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == 0)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = (temp);
	}
	head = 0;
}
