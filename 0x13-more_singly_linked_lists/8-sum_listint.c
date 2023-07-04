#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - returns the saum of all data in the list
 * @head: pointer to the head node
 * Return: 0 when successful
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
