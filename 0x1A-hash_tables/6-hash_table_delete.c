#include "hash_tables.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *current, *temp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			current = ht->array[i];
			while (current != NULL)
			{
				temp = current->next;
				free(current->key);
				free(current->value);
				free(current);
				current = temp;
			}
		}
	}
	free(head->array);
	free(head);
}
