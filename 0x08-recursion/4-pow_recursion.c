#include "main.h"

/**
 * _pow_recursion - raises a number to a power
 * @x: first integer
 * @y: second integer
 * Return: 0 when it evaluates
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
