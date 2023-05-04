#include <stdio.h>
#include "main.h"
#include <stddef.h>

/**
 * flip_bits - returns number of bits to be flipped to get to new number
 * @n: first integer
 * @m: second integer
 * Return: number of flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int j = n ^ m, bits = 0;

	while (j > 0)
	{
		bits = bits + (j & 1);
		j = j >> 1;
	}
	return (bits);
}
