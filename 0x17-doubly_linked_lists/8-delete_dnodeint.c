#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * deleteNode - deletes a node
 * @head: pointer to a pointer
 * @del: pointer to node to be deleted
 * Return: 0 when successful
 */
void deleteNode(dlistint_t **head, dlistint_t *del)
{
	if ((*head) == NULL || del == NULL)
		return;
	if ((*head) == del)
		(*head) = del->next;
	if (del->next != NULL)
		del->next->prev = del->prev;
	if (del->prev != NULL)
		del->prev->next = del->next;
	free(del);
}
/**
 * delete_dnodeint_at_index - deletes the node at index index
 * @head: pointer to a pointer
 * @index: position of node to be deleted
 * Return: 0 when successful
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = (*head);
	unsigned int i = 1;

	if ((*head) == NULL || index <= 0)
		return (-1);
	for (i = 1; temp != NULL && i < index; i++)
		temp = temp->next;
	if (temp == NULL)
		return (-1);
	deleteNode(head, temp);

	return (1);
}
