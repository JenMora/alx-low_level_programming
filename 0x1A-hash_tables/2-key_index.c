#include "hash_tables.h"

/**
 * key_index - Calculate the index for a given key in a hash table's array
 * @key: The key for which to calculate the index
 * @size: The size of the array of the hash table
 * Return: The calculated index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int hash_value = hash_djb2(key);
    /*Use the hash_djb2 function to calculate the hash value*/
    unsigned long int index = hash_value % size;
    /*Calculate the index using modulo operator*/
    return index;
}
