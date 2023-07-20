#include "lists.h"

/**
*dlistint_len -a function that returns the number of
*elements in a linked dlistint_t list.
*@h: pointer to doubly linked list
*Description: count number of elements in doubly
*Return: total number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t argument_count = 0;

while (h)
{
h = h->next;
argument_count++;
}
return (argument_count);
}
