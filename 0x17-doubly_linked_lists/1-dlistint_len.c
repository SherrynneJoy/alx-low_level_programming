#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a list
 * @h: pointer to the head
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int total = 0;

	while (h != NULL)
	{
		h = h->next;
		total++;
	}
	return (total);
}
