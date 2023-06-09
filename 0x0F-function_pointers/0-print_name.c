#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_name - function that prints a name
 * @name: pointer to a char
 * @f: function pointer
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;

	f(name);
}
