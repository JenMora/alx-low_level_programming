#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *sum_listint-  a function that returns the sum of all
 *the data (n) of a listint_t linked list
 *@head:the header pointer to the list
 *Return:0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
