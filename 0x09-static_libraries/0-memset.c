#include "main.h"

/**
 * _memset - fills bytes of memory
 * @s: first address to be filled
 * @b: desired result
 * @n: number of bytes to be filled and changed
 * Return: new array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i = 0; n > 0; i++)
	{
	s[i] = b;
	n--;
	}
	return (s);
}
