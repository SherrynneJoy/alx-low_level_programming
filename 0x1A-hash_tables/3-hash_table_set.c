#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_set - adds an element to the hash table.
 * @ht:  pointer to hash table
 * @key: the key
 * @value: value associated with the key
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *current, *temp;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);
	index = hash_djb2((const unsigned char *)key) % ht->size;
	/*check if the key exists in the hash table*/
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			if (temp->value == NULL)
				return (0);
			return (1);
		}
		temp = temp->next;
	}
	/*creating a new node*/
	current = malloc(sizeof(hash_node_t));
	if (current == NULL)
		return (0);
	current->key = strdup(value);
	if (current->key == NULL)
	{
		free(current);
		return (0);
	}
	current->value = strdup(value);
	if (current->value == NULL)
	{
		free(current->key);
		free(current);
		return (0);
	}
	current->next = ht->array[index];
	ht->array[index] = current;
	return (1);
}
