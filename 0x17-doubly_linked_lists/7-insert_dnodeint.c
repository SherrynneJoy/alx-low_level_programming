#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - inserts a node at a given position
 * @h: pointer to pointer
 * @idx: an integer
 * @n: an integer
 * Return: 0 when successful
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	 dlistint_t *new = NULL;
	 dlistint_t *temp = *h;
	 unsigned int i = 1;

	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		if (temp != NULL)
			while (temp->prev != NULL)
				temp = temp->prev;
		while (temp != NULL)
		{
			if (i == idx)
			{
				if (temp->next == NULL)
					new = add_dnodeint_end(h, n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new != NULL)
					{
						new->n = n;
						new->next = temp->next;
						new->prev = temp;
						temp->next->prev = new;
						temp->next = new;
					}
				}
				break;
			}
			temp = temp->next;
			i++;
		}
	}
	return (new);
}
