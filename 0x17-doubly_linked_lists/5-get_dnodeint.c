#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_dnodeint_at_index - gets the nth node of a list
 * @head: pointer to a pointer
 * @index: index of the node starting from 0
 * Return: address of the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	for (count = 0; count < index; count++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
