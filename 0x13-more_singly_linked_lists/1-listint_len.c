#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * listint_len - returns number of elements in a linked list
 * @h: pointer
 * Return: number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
	n++;
	h = h->next;
	}
	return (n);
}
