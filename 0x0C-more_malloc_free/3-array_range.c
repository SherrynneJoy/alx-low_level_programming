#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: 0 when it evaluates
 */

int *array_range(int min, int max)
{
	int *s;
	int size;
	int i;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	s = malloc(sizeof(int) * size);
	if (s == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		s[i] = min++;

	return (s);
}

