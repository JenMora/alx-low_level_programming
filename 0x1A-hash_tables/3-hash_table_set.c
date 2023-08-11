#include "hash_tables.h"


/**
 * create_node - This function creates a node
 * @key: the key of the hash function
 * @value: value corresponding to a key associated with  the hash function
 * Return: modified node
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	return (new_node);
}
/**
 * hash_table_set - aThis function dds an element to the hash table
 * @ht: The hash table to be modified
 * @key: the key asscociated with the hash function
 * @value: value associated with the key and the hash function
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_hash_table;
	unsigned long int index = 0;

	if (ht == NULL || ht->array == NULL)
/* this if function checks for valid inputs and returns0 of failure*/		
	{
		return (0);
	}
	new_hash_table = create_node(key, value);
	if (new_hash_table == NULL)
	{
		return (0);
	}
	index = hash_djb2((const unsigned char *)key) % ht->size;
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_hash_table;
	}
	else if (strcmp(ht->array[index]->key, key) == 0)
	{
		free(ht->array[index]->value);
		free(new_hash_table->key);
		free(new_hash_table->value);
		free(new_hash_table);
		ht->array[index]->value = strdup(value);
		return (1);
	}
	else
	{
		new_hash_table->next = ht->array[index];
		ht->array[index] = new_hash_table;
	}
	return (1);
}
