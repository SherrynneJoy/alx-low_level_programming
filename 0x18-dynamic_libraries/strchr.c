#include "main.h"

/**
 * _strchr - looks for the first occurrence of a character
 * @s: pointer to string
 * @c: character
 * Return: 0 when successful
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
