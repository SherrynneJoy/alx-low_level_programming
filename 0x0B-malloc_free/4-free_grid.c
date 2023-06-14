#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees memory allocated in the grid
 * @grid: a 2D pointer
 * @height: a parameter
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
