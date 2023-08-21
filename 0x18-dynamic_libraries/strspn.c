#include "main.h"

/**
 * _strspn - measures the length of a prefix of a substring
 * @s: pointer to a string
 * @accept: pointer
 * Return: 0 when successful
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;

	while (s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
