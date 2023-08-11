#include "hash_tables.h"

/**
* hash_table_delete - This function deletes a hash table and its contents.
* @ht: Pointer to the hash table to be deleted.
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	unsigned long int size;
	hash_node_t *node, *mem;
	size = ht->size;

if (ht == NULL || ht->array == NULL)
{
free(ht);
return;
}
for (; i < size; i++)
{
node = ht->array[i];
while (node != NULL)
{
mem = node->next;
free(node->key);
free(node->value);
free(node);
node = mem;
}
}

free(ht->array);
free(ht);
}
