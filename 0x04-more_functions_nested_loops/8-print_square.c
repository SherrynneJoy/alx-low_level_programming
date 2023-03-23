#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 * Return: new line when size is zero or less
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int m;
		int n;

		for (m = 0; m < size; m++)
		{
			for (n = 0; n < size; n++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
