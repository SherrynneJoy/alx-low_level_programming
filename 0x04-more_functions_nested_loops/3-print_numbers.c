#include "main.h"

/**
 * print_numbers - prints numbers between zero and nine
 * Return: 0 always
 */

void print_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9; i++)
		_putchar(i + '0');
	_putchar('\n');
}
