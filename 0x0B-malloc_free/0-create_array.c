#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: first parameter
 * @c: characters to be printed
 * Return: 0 when it evaluates
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int n;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);
	for (n = 0; n < size; n++)
		s[n] = c;
	return (s);
}
