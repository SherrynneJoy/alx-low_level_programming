#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_get - a function that retrieves a value associated with a key
 * @ht: pointer to a hash table
 * @key: the key
 * Return:  value associated with the element, or NULL if key fails
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *current = NULL;

	index = hash_djb2((const unsigned char *)key) % ht->size;
	current = ht->array[index];

	if (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
	}
	return  (NULL);
}
