#include "hash_tables.h"



/**
* hash_table_get - This function retrieves a value associated with a key
* @ht: hash table from which the value is retrieved
* @key: The key to be retrieved
* Return: value associated with the element, otherwise 0
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index = 0;

/*Check if the hash table or array is NULL*/
if (ht == NULL || ht->array == NULL)
/*This if function checks for valid inputs and returns 0 on failure*/
{
return (NULL);
}

/*Calculate the index using the hash function and table size*/
index = hash_djb2((const unsigned char *)key) % ht->size;
/*this algorithm calculates the index of the key*/

/*Loop through the linked list at the calculated index*/
while (ht->array[index] != NULL)
{
if (strcmp(ht->array[index]->key, key) == 0)
{
return (ht->array[index]->value);
/*Return the associated value*/
}

/*move to the next node in the linked list*/
ht->array[index] = ht->array[index]->next;
}

return (NULL);
}

