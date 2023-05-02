#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 *  * add_nodeint - adds a node at the beginning
 *  @head: a pointer
 *  @n: an integer
 *  Return: address of new element if it evaluates and null if otherwise
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
