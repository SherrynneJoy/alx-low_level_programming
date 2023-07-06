#include "lists.h"
#include <stdio.h>

/**
 * looped_listint_count - counts the number of unique nodes
 * @head: points to the head node
 * Return: 0 when successful
 */

size_t looped_listint_count(const listint_t *head)
{
	const listint_t *ptr1, *ptr2;
	size_t nodes = 1;

	if (!head || head->next == NULL)
		return (0);

	ptr1 = head->next;
	ptr2 = (head->next)->next;

	while (ptr2)
	{
		if (ptr1 == ptr2)
		{
			ptr1 = head;
			while (ptr1 != ptr2)
			{
				nodes++;
				ptr1 = ptr1->next;
				ptr2 = ptr2->next;
			}
			ptr1 = ptr1->next;
			while (ptr1 != ptr2)
			{
				nodes++;
				ptr1 = ptr1->next;
			}
			return (nodes);
		}
		ptr1 = ptr1->next;
		ptr2 = (ptr2->next)->next;
	}
	return (0);

}
/**
 * print_listint_safe - prints a linked list
 * @head: pointer to the head node
 * Return: 0 when successful
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, idx = 0;

	nodes = looped_listint_count(head);

	if (nodes == 0)
	{
		for (nodes = 0; head != NULL; nodes++)
		{
			printf("[%p] %d\n",  (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (idx = 0; idx < nodes; idx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n",  (void *)head, head->n);
	}
	return (nodes);
}
