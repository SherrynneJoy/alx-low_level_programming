#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - creates a 2D array
 * @width: first parameter
 * @height: second parameter
 * Return: 0 always
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int r = 0;
	int c = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(sizeof(int *) * height);
	if (!ptr)
		return (NULL);
	for (c = 0; c < height; c++)
	{
		ptr[c] = malloc(sizeof(int) * width);
		if (ptr[c] == NULL)
		{
			for (c = 0; c >= 0; c++)
				free(ptr[c]);
			free(ptr);
			return (NULL);
		}
	}
	for (c = 0; c < height; c++)
	{
		for (r = 0; r < width; r++)
			ptr[c][r] = 0;
	}
	return (ptr);
}
