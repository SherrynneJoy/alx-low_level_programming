#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - adds a node at the beginning of a node
 * @head: pointer to head node
 * @n: data stored in the node
 * Return: 0 when successful
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = (*head);
	(*head) = new;

	return (new);
}
