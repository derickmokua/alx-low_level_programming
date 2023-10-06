#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct hash_node_s - Represents a node in a hash table
 *
 * @key: A unique string key associated with this node
 * @value: The data value corresponding to the key
 * @next: A pointer to the next node in the linked list
 */

typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Represents a hash table data structure
 *
 * @size: The size of the array
 * @array:array of size @size where each cell is a pointer to the first node
 *         of a linked list. This design choice enables Chaining for collision
 *         handling.
 */

typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/**
 * struct shash_node_s - Represents a node in a sorted hash table
 *
 * @key: A unique string key associated with this node
 * @value: The data value corresponding to the key
 * @next: A pointer to the next node in the regular linked list
 * @sprev: A pointer to the previous element in the sorted linked list
 * @snext: A pointer to the next element in the sorted linked list
 */

typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - Represents a sorted hash table data structure
 *
 * @size: The size of the array
 * @array: array of size @size where each cell is a pointer to the first node
 *         of a linked list, facilitating chainig for collisiuon handling.
 * @shead: A pointer to the first element in the sorted linked list
 * @stail: A pointer to the last element in the sorted linked list
 */

typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);

#endif
