#include "main.h"

/**
 * _puts_recursion - prints a new string
 * @s: parameter
 * Return: 0 when it evaluates
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
