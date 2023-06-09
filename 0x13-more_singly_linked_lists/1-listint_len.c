#include "lists.h"
#include <stdio.h>

/**
 * listint_len - prints te number of element in a linkedlist
 * @h: pointer to head node
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		if (!h)
			return (-1);
		h = h->next;
		count++;
	}
	return (count);
}
