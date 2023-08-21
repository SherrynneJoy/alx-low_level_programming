#include "main.h"

/**
 * _strncat - concatenates strings
 * @dest: where the string will be copied to
 * @src: source of the string
 * @n: an integer
 * Return: 0 when successful
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y;

	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
