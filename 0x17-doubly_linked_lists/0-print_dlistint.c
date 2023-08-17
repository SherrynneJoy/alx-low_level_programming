#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint - prints elements in a doubly linked list
 * @h: pointer to head node
 * Return: 0 when successful
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int total = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		total++;
		h = h->next;
	}
	return (total);
}
