#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
* shash_table_create - Create a sorted hash table.
* @size: The size of the array.
* Return: A pointer to the newly created hash table, or NULL on failure.
*/
shash_table_t *shash_table_create(unsigned long int size)
{
shash_table_t *ht = malloc(sizeof(shash_table_t));
if (!ht)
return (NULL);

ht->size = size;
ht->array = malloc(sizeof(shash_node_t *) * size);
if (!ht->array)
{
free(ht);
return (NULL);
}

for (unsigned long int i = 0; i < size; ++i)
ht->array[i] = NULL;

ht->shead = NULL;
ht->stail = NULL;

return (ht);
}

/**
* shash_table_set - Insert a key-value pair into a sorted hash table.
* @ht: A pointer to the sorted hash table.
* @key: The key to insert.
* @value: The value associated with the key.
* Return: 1 on success, 0 on failure.
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
if (!ht || !key)
return (0);

unsigned long int index = key_index((const unsigned char *)key, ht->size);
shash_node_t *new_node = malloc(sizeof(shash_node_t));
if (!new_node)
return (0);

new_node->key = strdup(key);
new_node->value = strdup(value);
new_node->next = ht->array[index];
new_node->sprev = NULL;
new_node->snext = NULL;

if (!ht->array[index] || strcmp(key, ht->array[index]->key) < 0)
{
new_node->snext = ht->shead;
if (ht->shead)
ht->shead->sprev = new_node;
else
ht->stail = new_node;
ht->shead = new_node;
}
else
{
shash_node_t *current = ht->shead;
while (current->snext && strcmp(key, current->snext->key) > 0)
current = current->snext;

new_node->sprev = current;
new_node->snext = current->snext;
if (current->snext)
current->snext->sprev = new_node;
else
ht->stail = new_node;
current->snext = new_node;
}

ht->array[index] = new_node;
return (1);
}
/**
* shash_table_get - Retrieve the value associated with a
* key from a sorted hash table.
* @ht: A pointer to the sorted hash table.
* @key: The key to search for.
* Return: The value associated with the key, or NULL if not found.
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
if (!ht || !key)
return (NULL);

unsigned long int index = key_index((const unsigned char *)key, ht->size);

shash_node_t *current = ht->array[index];
while (current)
{
if (strcmp(key, current->key) == 0)
return (current->value);
current = current->next;
}

return (NULL);
}

/**
* shash_table_print - Print a sorted hash table.
* @ht: A pointer to the sorted hash table.
*/
void shash_table_print(const shash_table_t *ht)
{
if (!ht)
return;

shash_node_t *current = ht->shead;
printf("{");
while (current)
{
printf("'%s': '%s'", current->key, current->value);
if (current->snext)
printf(", ");
current = current->snext;
}
printf("}\n");
}

/**
* shash_table_print_rev - Print a sorted hash table in reverse order.
* @ht: A pointer to the sorted hash table.
*/
void shash_table_print_rev(const shash_table_t *ht)
{
if (!ht)
return;

shash_node_t *current = ht->stail;
printf("{");
while (current)
{
printf("'%s': '%s'", current->key, current->value);
if (current->sprev)
printf(", ");
current = current->sprev;
}
printf("}\n");
}

/**
* shash_table_delete - Delete a sorted hash table and free its memory.
* @ht: A pointer to the sorted hash table.
*/
void shash_table_delete(shash_table_t *ht)
{
if (!ht)
return;

for (unsigned long int i = 0; i < ht->size; ++i)
{
shash_node_t *current = ht->array[i];
while (current)
{
shash_node_t *temp = current;
current = current->next;
free(temp->key);
free(temp->value);
free(temp);
}
}

free(ht->array);
free(ht);
}

