#include "lists.h"

/**
 *add_nodeint -a function that adds a new node at
 *the beginning of a listint_t list
 *@n:the constant integer
 *@head:the headere pointer to the listint
 *Return:the address of the new element,otherwise NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nodes;

	nodes = malloc(sizeof(listint_t));
	if (nodes == 0)
	{
		return (0);
	}
	nodes->n = n;
	nodes->next = *head;
	*head = nodes;
		return (nodes);
}
