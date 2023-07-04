#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a listint_t list
 * @head: pointer that points to the head node
 * Return: 0 when successful
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return;
	while (*head)
	{
		temp = (*head)->next;
	free(*head);
	*head = temp;
	}
	*head = NULL;
}
