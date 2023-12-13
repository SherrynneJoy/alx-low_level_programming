#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * jump_search - jumps from block to block in search of an element
 * @array: a pointer to the first element of the array to search in
 * @size:  the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	int i = 0;
	size_t block = sqrt(size);
	size_t j;

	if (array == NULL)
	{
		return (-1);
	}

	while (array[block] <= value && block < size)
	{
		printf("Value checked array [%ld] = [%d]", block, array[block]);
		i = block;
		block += sqrt(size);
		if (block > size - 1)
			return (-1);
	}
	printf("Value checked array [%ld] = [%d]", block, array[block]);
	for (j = i; j < block; j++)
	{
		printf("Value checked array [%ld] = [%d]", j, array[j]);
		if (array[j] == value)
		{
			printf("Value found between indexes [%d] and [%ld]", i, block);
			return (value);
		}
	}
	printf("\n");
	return (-1);
}
