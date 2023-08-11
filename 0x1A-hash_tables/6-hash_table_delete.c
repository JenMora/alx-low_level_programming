#include "hash_tables.h"

/**
* free_node - This function frees memory allocated for
* a hash node and its contents.
* @node: Pointer to the hash node to be freed.
*/
void free_node(hash_node_t *node)
{
free(node->key);
free(node->value);
free(node);
}

/**
* hash_table_delete - This function deletes a hash table and its contents.
* @ht: Pointer to the hash table to be deleted.
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current, *mem;

if (ht == NULL || ht->array == NULL)
return;

for (; i < ht->size; i++)
{
current = ht->array[i];
while (current != NULL)
{
mem = current->next;
free_node(current);
current = mem;
}
}

free(ht->array);
free(ht);
}
