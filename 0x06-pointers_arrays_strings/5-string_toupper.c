#include "main.h"

/**
 * string_toupper - changes lowercase strings to uppercase
 * @m: pointer
 * Return: m
 */

char *string_toupper(char *m)
{
	int j;

	j = 0;
	while (m[j] != '\0')
	{
		if (m[j] >= 'a' && m[j] <= 'z')
			m[j] -=  32;
		j++;
	}
	return (m);
}
