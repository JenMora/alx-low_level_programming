#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *add_node - a function that adds a new node at the beginning of a list_t list
 *@head: a pointer to the first node
 *@str: the string
 *Return:0 if not successfull or otherwise the adress of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newlist;

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
		newlist->next = *head;
		*head = newlist;

		return (newlist);
}
