#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
size_t print_listint_safe(const listint_t *head);
size_t looped_listint_len(const listint_t *head);

/**
 * looped_listint_len - a function that counts the number of unique nodes
 * in a listint_t linked list
 * @head: the header pointer to the list
 * Return:the number of unique nodes, otherwise 0
 */
size_t looped_listint_len(const listint_t *head)
{
	size_t unique_nodes;

	unique_nodes = 1;

	const listint_t *slow_t, *fast_h;

	if (head == 0 || head->next == 0)
	{
		return (0);
	}

	slow_t = head->next;
	fast_h = (head->next)->next;

	while (fast_h)
	{
		if (slow_t == fast_h)
		{
			slow_t = head;

			while (slow_t != fast_h)
			{
				unique_nodes++;
				slow_t = slow_t->next;
					fast_h = fast_h->next;
			}
			slow_t = slow_t->next;

			while (slow_t != fast_h)
			{
				unique_nodes++;
				slow_t = slow_t->next;
			}
			return (unique_nodes);
		}
		slow_t = slow_t->next;
		fast_h = (fast_h->next)->next;
	}
	return (0);
}

/**
*print_listint_safe- a function that prints a listint_t linked list
* @head: the head pointer to the list
*Return: the number of nodes in a list
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t node_elements, index = 0;

	node_elements = looped_listint_len(head);
		if (node_elements == NULL)
		for (; head != 0; node_elements++)
			{
				printf("[%p] %d\n", (void *)head, head->n);
				head = head->next;
			}
		else
		{
			for (index = 0; index < node_elements; index++);

			printf("[%p]%d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("->[%p]%d\n", (void *)head, head->n);
		
	return (node_elements);
}

