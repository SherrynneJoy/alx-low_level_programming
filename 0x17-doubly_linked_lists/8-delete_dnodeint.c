#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_dnodeint_at_index - deletes the node at index index
 * @head: pointer to a pointer
 * @index: position of node to be deleted
 * Return: 0 when successful
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = (*head);
	dlistint_t *h;
	unsigned int i = 0;

	if (temp != NULL)
		while (temp->prev != NULL)
			temp = temp->prev;
	while (temp != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				(*head) = temp->next;
				if ((*head) != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				h->next = temp->next;
				if (temp->next != NULL)
					temp->next->prev = h;
			}
			free(temp);
			return (1);
		}
		h = temp;
		temp = temp->next;
		i++;
	}
	return (-1);
}
