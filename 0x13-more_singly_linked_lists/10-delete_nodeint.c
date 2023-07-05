#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes a node at a given  position
 * @head: points to the head node
 * @index: index of the node that should be deleted
 * Return: 1 if successful and -1 otherwisse
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	unsigned int i = 0;
	listint_t *delete;

	if (!(*head))
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		temp->next = NULL;
		free(temp);
	}
	else
	{
		for (i = 0; i < index - 1; i++)
		{
			temp = temp->next;
		}
	delete = temp->next;

	temp->next = temp->next->next;

	delete->next = NULL;
	free(delete);
	}
	return (1);
}
