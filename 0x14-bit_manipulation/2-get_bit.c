#include <stdio.h>
#include "main.h"
#include <stddef.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @index: index starting from zero of desired bit
 * @n: an integer
 * Return: value of index at bit or -1 if it fails
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
