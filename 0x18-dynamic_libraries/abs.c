#include "main.h"

/**
 * _abs - checks for absolute values
 * @n: an integer
 * Return: absolute values
 */
int _abs(int n)
{
	if (n < 0)
		n = -(n);
	else
		n = n;
	return (n);
}
