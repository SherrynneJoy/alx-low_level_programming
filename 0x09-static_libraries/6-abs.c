#include "main.h"

/**
 * _abs - prints the absolute value of an integer
 * @i: the parameter to be checked
 * Return: a positve numer always
 */

int _abs(int i)
{
	if (i < 0)
	i = -i;
	else if (i >= 0)
	i = i;
	return (i);
}
