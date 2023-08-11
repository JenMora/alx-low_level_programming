#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print -This is a function that  prints a hash table
 * @ht: The hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, node = 0;
	hash_node_t *new_hash_table;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		new_hash_table = ht->array[i];
		while (new_hash_table != NULL)
		{
			if (node)
			{
				printf(", ");
			}
			printf("'%s': '%s'", new_hash_table->key, new_hash_table->value);
			node = 1;
			new_hash_table = new_hash_table->next;
		}
	}
	printf("}\n");
}
