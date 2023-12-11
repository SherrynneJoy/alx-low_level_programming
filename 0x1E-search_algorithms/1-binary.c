#include "search_algos.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_search - an interval search algorithm
 * @array:  a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid = 0;
	size_t i = 0;

	if (array == NULL)
	{
		return (-1);
	}
	while (left <= right)
	{
		printf("Searching in array: ");
		mid = left + (right - left) / 2;
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < size - 1)
			{
				printf(", ");
			}
		}
		printf("\n");
		if (value == array[mid])
		{
			return (mid);
		} else if (value < array[mid])
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	return (-1);
}
