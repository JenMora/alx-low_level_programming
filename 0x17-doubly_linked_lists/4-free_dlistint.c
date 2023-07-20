#include "lists.h"

/**
*free_dlistint - a function that frees a dlistint_t list.
*@head: pointer to linked list
*Description: free linked list
*Return: void
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *pointer = head;

while (head)
{
head = head->next;
free(pointer);
pointer = head;
}
}
