#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints elements in a linked list
 * @h: pointer to the head node
 * Return: 0 when successful
 */

size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
