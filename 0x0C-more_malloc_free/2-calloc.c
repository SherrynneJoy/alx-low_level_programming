#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc = allocates memory for an array
 * @nmemb: nmber of elements in the array
 * @size: size of bytes allocated
 * Return: pointer to allocated space in memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
