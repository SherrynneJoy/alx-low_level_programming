#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a node at a given position
 * @head: pointer to the head node
 * @idx: is the index of the list where the new node should be added
 * @n: data to be put into the node
 * Return: 0 when successful
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = NULL;

	if (idx < 1 || !new)
	{
		return (NULL);
	} else if (idx == 1)
	{
		new->next = *head;
	*head = new;
	}
	else
	{
		temp = *head;
		for (i = 1; i < idx - 1; i++)
		{
			if (temp != NULL)
				temp = temp->next;
		}
	}
	if (temp != NULL)
	{
		new->next = temp->next;
		temp->next = new;
	}
	else
	{
		return (NULL);
	}
	return (new);
}
