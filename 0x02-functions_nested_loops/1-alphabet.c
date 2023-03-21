#include "main.h"

/**
 * print_alphabet - is the function that prints small letters
 * Return: 0 when it evaluates
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
