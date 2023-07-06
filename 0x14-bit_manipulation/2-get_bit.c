#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: first integer
 * @index: second index
 * Return: 0 when successful
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int mask;

	if (index > 63)
		return (-1);
	mask = (n >> index) & 1;

	return (mask);
}
