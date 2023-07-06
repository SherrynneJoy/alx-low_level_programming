#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: an integer
 * Return: 0 when successful
 */

void print_binary(unsigned long int n)
{
	int i, j = 0;
	unsigned long int mask;

	/* assuming a 32-bit int */
	for (i = 31; i >= 0; i--)
	{
		mask = n >> i;

		if (mask & 1)
		{
			_putchar('1');
			j++;
		}
		else if (j)
			_putchar('0');
	}
	if (!j)
		_putchar('0');
}
