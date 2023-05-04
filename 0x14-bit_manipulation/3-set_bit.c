#include <stdio.h>
#include "main.h"
#include <stddef.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @index: index of the bit you want to use from 0
 * @n: a pointer
 * Return: 1 if successful or -1 if it fails
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n ^= (1 << index);
	return (1);
}
