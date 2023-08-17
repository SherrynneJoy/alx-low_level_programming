#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_dlistint - returns the sum of elements in a list
 * @head: pointer to the first node
 * Return: 0 when successful
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
