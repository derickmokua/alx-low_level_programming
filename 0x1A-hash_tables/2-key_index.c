#include "hash_tables.h"

/**
 * key_index - Determines the index for a given key in a hash table
 *
 * @key: The key for which the index is to be calculated
 * @size: The size of the hash table's array
 *
 * Return: The index where the key/value pair should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key) % size;

	return (index);
}
