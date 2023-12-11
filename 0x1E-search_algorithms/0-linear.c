#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * linear_search - searches for a value in an array of ints using LSA
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value to search for
 * Return: the first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (array == NULL)
	{
		return (-1);
	}
	for (idx = 0; idx < size; idx++)
	{
		if (array[idx] == value)
		{
			printf("Value checked array[%lu] = [%d]", idx, value);
			return (idx);
		}
	}
	return (-1);
}
