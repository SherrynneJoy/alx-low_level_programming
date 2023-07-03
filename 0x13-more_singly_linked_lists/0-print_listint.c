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

	if (!h)
		return (-1);
	while (h != NULL)
	{
		printf("%u\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
