#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: first parameter
 * @accept: second parameter
 * Return: 0 if it succeeds
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int m = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				m++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (m);
		}
		s++;
	}
	return (m);
}
