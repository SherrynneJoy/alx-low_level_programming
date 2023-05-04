#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: a pointer
 * Return: converted number or 0 when b is null or b is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	int m;
	unsigned int mydecimal = 0;

	if (b == NULL)
		return (0);
	for (m = 0; b[m]; m++)
	{
		if (b[m] < '0' || b[m] > '1')
			return (0);
		mydecimal = 2 * mydecimal + (b[m] - '0');
	}
	return (mydecimal);
}
