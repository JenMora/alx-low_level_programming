#include "hash_tables.h"

/**
* hash_table_set - This function that adds an element to the hash table
* @ht: The hash table to which a n element is added
* @key: The value of a hash function
* @value: The value of the hash function associated with the key
* Return: 1 on sucess, otherwise 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *new_node;
index = key_index((const unsigned char *)key, ht->size);
/*calculate the index for the key using the key index function*/
new_node = malloc(sizeof(hash_node_t));
/*Allocate the memory of teh new hash_node_t data structure*/
if (ht == NULL || key == NULL || *key == '0' || value == NULL)
/* check for inavlid entries anf return null to indicate failure*/
return (0);
if (new_node == NULL)
return (0);
/*return null if ma;;oc fails*/

new_node->key = strdup(key);
/*the key is duplicated to ensure safe storage of the key in teh new node*/
if (new_node->key == NULL)
/*duplicate the key and return 0 if duplication fails*/
{
free(new_node);
return (0);
}

new_node->value = strdup(value);
if (new_node->value == NULL)
{
free(new_node->key);
free(new_node);
return (0);
/*free allocted memory for the key and new node and return 0 on failures*/
}
new_node->next = ht->array [index];
ht->array [index] = new_node;
/*Add the new node at he beginning of the linked list at the calculated index*/
return (1);
}
