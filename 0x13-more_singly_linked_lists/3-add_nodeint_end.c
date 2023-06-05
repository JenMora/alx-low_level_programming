#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
*add_nodeint_end- a function that adds a new node at the end
* @n: the integer
* @head: the header pointer to teh node
* Return:the address of the new element, otherwise NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *nodes, *last;

nodes = malloc(sizeof(listint_t));
if (nodes == 0)
{
return (0);
}
nodes->n = n;
nodes->next = NULL;

if (*head == 0)
	*head = nodes;
else
{
last = *head;
while (last->next != 0)
last = last->next;
last->next = nodes;
}
return (*head);
}
