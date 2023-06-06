#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - a function that frees a listint_t list
 * @h: the header to the pointer
 * Return:  the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{

