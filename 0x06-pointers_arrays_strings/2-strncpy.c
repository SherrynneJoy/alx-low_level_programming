#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: first string
 * @src: second string
 * Return: new string
 * @n: an integer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int k;

	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}
	return (dest);
}
