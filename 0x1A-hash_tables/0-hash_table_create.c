#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - a function that creates a hash table
 * @size: size of the array
 * Return: a hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *new = NULL;

	if (size == 0)
		return (NULL);
	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);
	new->size = size;
	new->array = calloc((size_t)new->size, sizeof(hash_node_t *));
	if (new->array == NULL)
		return (NULL);

	for (i = 0; i < new->size; i++)
		new->array[i] = NULL;
	return (new);
}
