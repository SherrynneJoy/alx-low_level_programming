#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns te nth node of a linked list
 * @head: pointer to the head node
 * @index: iterates throug the nodes
 * Return: 0 when successful
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current && count < index)
	{
		current = current->next;
		count++;
	}
	return (current ? current : NULL);
}
