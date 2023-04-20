#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int m;
	char *str;

	va_start(args, n);
	for (m = 0; m < n; m++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (m < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
