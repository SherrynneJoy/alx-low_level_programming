#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * pop_listint - deletes the head node of the list
 * @head: pointer
 * Return: 0 if the linked list is empty
 * @n: optional integer
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int m;

	if (*head == NULL)
		return (0);
	temp = *head;
	m = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (m);
}
