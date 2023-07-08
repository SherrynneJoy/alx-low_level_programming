#include "main.h"
#include <string.h>

/**
 * binary_to_uint - converst a binary number to an unsigned int
 * @b: pointer to the string
 * Return: number in decimal
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int length = 0;
	unsigned int n = 1;
	int m;

	length = strlen(b);

	for (m = length - 1; m >= 0; m--)
	{
		if (b[m] != '0' && b[m] != '1')
			return (0);
		if (b[m] == '1')
		{
			i += n;
		}
		n *= 2;
	}
	return (i);
}
