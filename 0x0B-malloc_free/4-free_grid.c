#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees the grid
 * @grid: 2D grid
 * @height: measures the height of the grid
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int m;

	for (m = 0; m < height; m++)
	{
		free(grid[m]);
	}
	free(grid);
}
