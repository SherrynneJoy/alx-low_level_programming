#include "main.h"

/**
 * print_sign - is the function that prints the sign of a number
 *@n: parameter to be checked
 * Return: 1, 0, -1 if when signs are postive, zero and negative respectively
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
