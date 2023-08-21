#include "main.h"

/**
 * _memcpy - allocates memory for n bytes to be copied
 * @dest: pointer to new string
 * @src: pointer to old string
 * @n: measures size of strings
 * Return: nothing
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *char_src = (char *)src;
	char *char_dest = (char *)dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		char_dest[i] = char_src[i];
	}
}
