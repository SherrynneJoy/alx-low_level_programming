#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates memory
 * @ptr: pointer to old address
 * @old_size: previous memory size
 * @new_size: new memory size
 * Return: new address
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *new_ptr;
	unsigned int i = 0;
	char *old_memory;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (old_size == new_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
	return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	old_memory = ptr;
	if (new_size < old_size)
	{
		while (i < new_size)
			new_ptr[i] = old_memory[i];
		i++;
	}
	if (new_size > old_size)
	{
		while (i < old_size)
		{
			new_ptr[i] = old_memory[i];
			i++;
		}
	}
	free(ptr);
	return (new_ptr);
}
