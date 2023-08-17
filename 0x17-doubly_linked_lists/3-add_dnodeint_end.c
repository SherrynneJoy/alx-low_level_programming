#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_dnodeint_end - adds a node at the end of the list
 * @head: pointer to pointer
 * @n: data to be put into the nodes
 * Return: address of the last node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tail;
	dlistint_t *temp;

	/* allocate space for new node */
	tail = malloc(sizeof(dlistint_t));
	if (tail == NULL)
		return (NULL);
	tail->n = n;
	tail->next = NULL; /* the last node points to nothing */
	/*supposing the list was empty */
	/* store the head node temporarily for later use */
	temp = (*head);
	/* if list is empty, make the new node the head node */
	if ((*head) == NULL)
	{
		tail->prev = NULL;
		(*head) = tail;
		return (tail);
	}
	/* if list is not empty, traverse to the end of the list */
	while (temp->next != NULL)
		temp = temp->next;
	/* the last node is temp, point temp to tail/ last node */
	temp->next = tail;
	/*assign prev of last node to temp */
	tail->prev = temp;
	return (tail);
}
