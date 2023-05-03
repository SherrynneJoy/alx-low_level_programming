#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * insert_nodeint_at_index - inserts a node ata given position
 * @idx: an iterator
 * @n: an integer
 * @head: a pointer
 * Return: address of new node or null if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *cpy = *head;
	unsigned int m;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = cpy;
		*head = new;
		return (new);
	}
	for (m = 0; m < (idx - 1);  m++)
	{
		if (cpy == NULL || cpy->next == NULL)
			return (NULL);
		cpy = cpy->next;
	}
	new->next = cpy->next;
	cpy->next = new;
	return (new);
}
