#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: first parameter
 * @c: second character
 * Return: character that has been located
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
