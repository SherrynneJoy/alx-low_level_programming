#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: a pointer to the head node
 * @n: value to be included in the node created
 * Return: new node's address
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;

	temp->next = new;

		return (new);
}
