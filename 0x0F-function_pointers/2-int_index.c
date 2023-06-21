#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: an array to pointer
 * @size: number of elements in the array
 * @cmp: function pointer
 * Return: 0 when it evaluates
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (cmp == NULL || array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]))
			return (j);
	}
	return (-1);
}
