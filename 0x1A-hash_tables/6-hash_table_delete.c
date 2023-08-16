#include "hash_tables.h"



/**
 * free_node - This is a user defined function that frees the node
 * @node: The node pointer to be freed
 * Return: 0
 */
void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}
/**
 * hash_table_delete - This is a function to deletes a hash table
 * @ht: This is the hash table to be deleted
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *tmp;
	unsigned long int integer = 0;

	if (ht == NULL || ht->array == NULL)
	{
		return;
	}
	for (; integer < ht->size; integer++)
	{
		node = ht->array[integer];
		while (node)
		{
			tmp = node->next;
			free_node(node);
			node = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
