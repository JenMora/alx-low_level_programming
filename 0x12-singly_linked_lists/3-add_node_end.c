#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_node_end - a function that adds a new node at the end of a list_t list
* @head:the pointer to teh first node
* @str: the stringto be duplicated
* Return:the element's new adress or otherwuise 0
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *newlist;

list_t *last;

int length;

char *duplicated_string;

newlist = malloc(sizeof(list_t));
if (newlist == 0)
{
return (0);
}
duplicated_string = strdup(str);
if (duplicated_string == 0)
{
free(newlist);
return (0);
}
for (length = 0; str[length];)
length++;
newlist->str = duplicated_string;
newlist->len = length;
newlist->next = 0;
if (*head == 0)
*head = newlist;
else
{
	last = *head;
	while (last->next != 0)
		last = last->next;
	last->next = newlist;
}

return (*head);
}
