#include "main.h"

/**
 * _memcpy - copies bytes from one memory to another
 * @src: first memory
 * @dest: second memory
 * @n: number of bytes
 * Return: copied byte
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int m = 0;
	int i = n;

	for (m = 0; m < i; m++)
	{
		dest[m] = src[m];
		n--;
	}
	return (dest);
}
