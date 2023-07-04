#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listsint_t list
 * @head: points to the head node
 * Return: 0 when successful
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;

		free(head);
		head = temp;
	}
}
