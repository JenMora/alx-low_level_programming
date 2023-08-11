#include "hash_tables.h"

/**
 *hash_table_create - A function that creates a hashtable
* @size: the size of the array
* Return: a pointer to teh bewly created hash table, otherwise 0
*/

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *H_table = NULL;
unsigned long int j = 0;
/*initialize the new pointer to NULL before malloc  for error handling*/

if (size == 0)
return (NULL);

H_table = malloc(sizeof(hash_table_t));
if (H_table == NULL)
return (NULL);
/*Free memory if malloc fails to avoid memory leaks*/
H_table->size = size;
H_table->array = malloc(sizeof(hash_node_t *) * size);
if (H_table->array == NULL)
{
free(H_table);
return (NULL);
/*Free memory if malloc fails to avoid memory leaks*/
}

for (; j < size; j++)
{
H_table->array[j] = NULL;
}
return (H_table);
}
