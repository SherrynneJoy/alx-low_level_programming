#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function
 * @size: size of the array
 * @action: pointer to the function to be used
 * @array: pointer of type int
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int m;

	if (array == NULL || action == NULL)
		return;
	for (m = 0; m < size; m++)
	{
		action(array[m]);
	}
}
