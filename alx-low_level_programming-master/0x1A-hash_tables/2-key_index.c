#include "hash_tables.h"
/**
 * key_index - Get the index at which a key/value
 * @key: The key to get the index
 * @size: The size of the array of the hash table.
 *
 * Return: The index of the key.
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
