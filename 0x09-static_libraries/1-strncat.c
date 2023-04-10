#include "main.h"

/**
 * _strncat - concatenates strings
 * @dest: the first string
 * @src: the second string
 * Return: concatenated string
 * @n: an integer
 */

char *_strncat(char *dest, char *src, int n)
{
	int m;
	int p;

	m = 0;
	while (dest[m] != '\0')
	{
	m++;
	}
	p = 0;
	while (p < n && src[p] != '\0')
	{
	dest[m] = src[p];
	m++;
	p++;
	}
	dest[m] = '\0';
	return (dest);
}
