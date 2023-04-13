#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: pointer to the created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int m, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(size * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	for (m = 0; min <= max; m++)
		ptr[m] = min++;
	return (ptr);
}
