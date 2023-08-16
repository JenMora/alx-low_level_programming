#include "hash_tables.h"

/**
 * hash_table_delete - This i a function that delete a hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *node;
	unsigned long int integer, size;

	if (ht->array == NULL)
	{
		free(ht);
		return;
	}
	size = ht->size;

	for (; integer < size; integer++)
	{
		node = ht->array[integer];
		while (node)
		{
			tmp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
