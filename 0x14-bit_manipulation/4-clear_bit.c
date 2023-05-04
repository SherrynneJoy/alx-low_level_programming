#include <stdio.h>
#include "main.h"
#include <stddef.h>

/**
 * clear_bit - sets the value of a bit to 0 at an index
 * @n: a pointer
 * @index: index starting from zero of the desired bit
 * Return: 1 if succesful and -1 if not
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
