#include "lists.h"

/**
*sum_dlistint -  a function that returns the sum of
*all the data (n) of a dlistint_t linked list.
*@head: head pointer to double linked list
*Description: returns the sum of all the data(n)
*Return: 0 if empty or sum of n value
*/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *cursor = head;

while (cursor)
{
sum += cursor->n;
cursor = cursor->next;
}
return (sum);
}
