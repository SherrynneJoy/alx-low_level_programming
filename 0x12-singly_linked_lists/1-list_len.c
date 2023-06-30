#include "lists.h"
#include <stdio.h>

/**
 * list_len - counts the elements in a list
 * @h: poiner to the head node
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
