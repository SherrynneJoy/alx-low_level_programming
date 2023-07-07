#include "main.h"

/**
 * flip_bits - number of bit to flipfromone int to another
 * @n: an integer
 * @m: second integer
 * Return: 0 when successful
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int mask;
	unsigned long int result = m ^ n;

	for (i = 63; i >= 0; i--)
	{
		mask = result >> i;
		if (mask & 1)
			count++;
	}
	return (count);
}
