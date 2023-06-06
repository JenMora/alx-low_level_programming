#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index -a function that inserts a new node at a
 * given position
 * @head: the head pointer to the given list
 * @idx: the index where a node is to be inserted
 * @n: the unsigned integer
 * Return: the address of the new node, ptherwise 0
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;

	listint_t *newnode, *copy = *head;

	newnode = malloc(sizeof(listint_t));
	if (newnode == 0)
	{
		return (0);
	}
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = copy;
		*head = newnode;
		return (newnode);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (copy == 0 || copy->next == 0)
			return (0);
		copy = copy->next;
	}
	newnode->next = copy->next;
	copy->next = newnode;
	return (newnode);
}
