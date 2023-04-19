#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @size: number of elements in an array
 * @cmp: function pointer
 * @array: an array
 * Return: 0 when it evaluates
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (n = 0; n < size; n++)
	{
		if (cmp(array[n]))
		return (n);
	}
	return (-1);
}
