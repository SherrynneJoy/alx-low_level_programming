#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: the number of times character \ should be printed
 * Return: \n
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int j;
		int k;

		for (j = 0; j < n; j++)
		{
			for (k = 0; k < n; k++)
			{
				if (j == k)
					_putchar('\\');
				else if (k < j)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
