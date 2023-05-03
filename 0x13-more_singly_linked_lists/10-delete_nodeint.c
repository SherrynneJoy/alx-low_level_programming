#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * delete_nodeint_at_index - deletes node at index
 * @index: index of node that should be deleted
 * @head: pointer
 * Return: 1 if successful and -1 if not
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *cpy = *head;
	unsigned int m;

	if (cpy == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(cpy);
		return (1);
	}
	for (m = 0; m < (index - 1); m++)
	{
		if (cpy->next == NULL)
			return (-1);
		cpy = cpy->next;
	}
	temp = cpy->next;
	cpy->next = temp->next;
	free(temp);
	return (1);
}
