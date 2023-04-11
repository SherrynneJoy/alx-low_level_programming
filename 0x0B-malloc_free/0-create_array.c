#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 * @size: checks the size of the array
 * @c: character
 * Return: pointer to an array
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
