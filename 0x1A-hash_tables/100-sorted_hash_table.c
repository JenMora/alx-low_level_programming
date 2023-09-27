#include "hash_tables.h"


/**
 * shash_table_create - This is a function that  create a sorted hash table
 * @size: size of the hash table
 * Return: pointer to the created hash table, or NULL on failure
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
    memset(ht->array, 0, sizeof(shash_node_t *) * size);
    ht->shead = NULL;
    ht->stail = NULL;

    return (ht);
}

/**
 * shash_table_set - This is a function that sets a key-value pair in the sorted hash table
 * @ht: The hash table to which the key value will be sorted
 * @key: key
 * @value: value
 * Return: 1 on success, 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    shash_node_t *node, *tmp;
    unsigned long int index;

    if (!ht || !key || !value)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);
    tmp = ht->array[index];
    while (tmp)
    {
        if (strcmp(tmp->key, key) == 0)
        {
            free(tmp->value);
            tmp->value = strdup(value);
            return (1);
        }
        tmp = tmp->next;
    }

    node = create_shash_node(key, value);
    if (!node)
        return (0);

    node->next = ht->array[index];
    ht->array[index] = node;
    if (!ht->shead || strcmp(node->key, ht->shead->key) < 0)
    {
        node->snext = ht->shead;
        ht->shead = node;
    }
    else
    {
        tmp = ht->shead;
        while (tmp->snext && strcmp(node->key, tmp->snext->key) >= 0)
            tmp = tmp->snext;
        node->snext = tmp->snext;
        tmp->snext = node;
    }
    return (1);
}

/**
 * shash_table_get - This function retrieves the value associated with a key in the sorted hash table
 * @ht: hash table
 * @key: key
 * Return: value associated with the key, or NULL if not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
    shash_node_t *node;
    unsigned long int index;

    if (!ht || !key)
        return (NULL);

    index = key_index((const unsigned char *)key, ht->size);
    node = ht->array[index];
    while (node)
    {
        if (strcmp(node->key, key) == 0)
            return (node->value);
        node = node->next;
    }
    return (NULL);
}

/* ... (rest of the code: create_shash_node, shash_table_print, etc.) ... */

/**
 * shash_table_delete - delete the sorted hash table
 * @ht: hash table
 */
void shash_table_delete(shash_table_t *ht)
{
    unsigned long int i;
    shash_node_t *node, *next;

    if (!ht)
        return;

    for (i = 0; i < ht->size; i++)
    {
        node = ht->array[i];
        while (node)
        {
            next = node->next;
            free(node->key);
            free(node->value);
            free(node);
            node = next;
        }
    }

    free(ht->array);
    free(ht);
}

