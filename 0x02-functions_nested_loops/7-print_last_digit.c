#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: number to be checked
 * Return: m
 */

int print_last_digit(int i)
{
	int m;

	if (i < 0)
	{
		i = -i;
	}
	m = i % 10;
	if (m < 0)
	{
		m = -m;
	}
	_putchar(m + '0');
	return (m);
}
