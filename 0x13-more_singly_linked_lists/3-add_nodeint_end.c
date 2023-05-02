#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * add_nodeint_end - adds a node at the end of a list
 * @head: two dimensional pointer
 * @n: an integer
 * Return: address of new element or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tail = *head;

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
	while (tail->next)
		tail = tail->next;
	tail->next = new;
	return (new);

}
