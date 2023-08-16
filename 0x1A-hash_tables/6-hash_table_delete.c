#include "hash_tables.h"

/**
 * hash_table_delete - This i a function that delete a hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t mem, *nod;
	unsigned long int integer, size;

	if (ht->array == NULL)
	{
		free(ht);
		return;
	}
	size = ht->size;

	for (; integer < size; integer++)
	{
		nod = ht->array[i];
		while (nod)
		{
			mem = nod->next;
			free(nod->key);
			free(nod->value);
			free(nod);
			nod = mem;
		}
	}
	free(ht->array);
	free(ht);
}
