#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: a list of the types of arguments passed to the function
 * Return: 0 when it evaluates
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *ptr;
	char *separator = "";
	int i = 0;

	va_start(args, format);
	if (format)
	{
		while (format)
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(args, int));
					break;
				case 's':
					ptr = va_arg(args, char *);
					if (ptr == NULL)
						ptr = "(nil)";
					printf("%s%s", separator, ptr);
					break;
				case 'f':
					printf("%s%f", separator, va_arg(args, double));
					break;
				default:
					i++;
					continue;
			}
			separator = ",";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
