#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * Return: printed string
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *ptr;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(args, char *);
		if (ptr == NULL)
			printf("(nil)");
		else
			printf("%s", ptr);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
