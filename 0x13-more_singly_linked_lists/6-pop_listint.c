#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes a node at the beginning of a likedlist
 * @head: points to the head node
 * Return: 0 when successful
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int count = 0;

	if (!(*head) || !head)
		return (0);
	count = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (count);
}
