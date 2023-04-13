#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _memset - fills memory with constant bytes
 * @s: memory to be filled
 * @b: character to be copied
 * @n: number of times b should be copied
 * Return: pointer to area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		s[m] = b;
	}
	return (s);
}

/**
 * _calloc - allocates memory for an array;
 * @nmemb: number of elements in an array
 * @size: bytes of the elements
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
