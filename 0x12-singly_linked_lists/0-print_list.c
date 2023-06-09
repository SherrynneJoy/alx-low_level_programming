#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - prints all elements of a list_t list
 * @h: pointer that points to the first node
 * Return: 0 when successful
 */

size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
