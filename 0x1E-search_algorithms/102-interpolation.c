#include "search_algos.h"
#include <stdio.h>

/**
 * interpolation_search - finds an element by going to where it msot likely is
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos = low + (((double)(high - low) / (array[high] - array[low])) *
			(value - array[low]));
	if (array == NULL)
		return (-1);
}
