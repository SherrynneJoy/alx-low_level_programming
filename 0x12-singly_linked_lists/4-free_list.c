#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * free_list - frees the list
 * @head: pointer
 * Return: : nothing
 */
void free_list(list_t *head)
{
	list_t  *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
