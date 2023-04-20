#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - prints nuumbers followed by a new line
 * @separator: string to be printed between the numbers
 * @n: number of integers to be passed into the function
 * Return: 0 when it evaluates successfully
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
	printf("%d", va_arg(args, int));
	if (i != n - 1 && separator != NULL)
		printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
