#include "hash_tables.h"

/**
 * hash_table_create - Initializes a new hash table
 *
 * @size: The desired size of the hash table's array
 *
 * Return: A pointer to the newly initialized hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;
	unsigned long int i = 0;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);

	ht->size = size;
	while (i < size)
	{
		ht->array[i] = NULL;
		i++;
	}

	return (ht);
}
