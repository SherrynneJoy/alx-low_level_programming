#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimension  array
 * @width: measures width of the grid
 * @height: measures the height of the grid
 * Return: pointer to 2-D array of integers
 */

int **alloc_grid(int width, int height)
{
	int **yaa;
	int m, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	yaa = malloc(sizeof(int *) * height);
	if (yaa == NULL)
		return (NULL);

	for (m = 0; m < height; m++)
	{
		yaa[m] = malloc(sizeof(int) * width);
		if (yaa[m] == NULL)
		{
			for (m = 0; m >= 0; m--)
				free(yaa[m]);

			free(yaa);
			return (NULL);
		}
	}
	for (m = 0; m < height; m++)
	{
		for (n = 0; n < width; n++)
			yaa[m][n] = 0;
	}
	return (yaa);
}
