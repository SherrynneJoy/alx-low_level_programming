#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - adds all the parameters
 * @n: first parameter
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int m, sum;

	va_start(args, n);
	if (n == 0)
		return (0);
	sum = 0;
	for (m = 0; m < n; m++)
		sum = sum + va_arg(args, int);

	va_end(args);
	return (sum);
}
