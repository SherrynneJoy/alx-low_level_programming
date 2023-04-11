#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, pi;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = pi = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[pi] != '\0')
		pi++;
	concat = malloc(sizeof(char) * (i + pi + 1));

	if (concat == NULL)
		return (NULL);
	i = pi = 0;
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
	}
	while (s2[pi] != '\0')
	{
		concat[i] = s2[pi];
		i++, pi++;
	}
	concat[i] = '\0';
	return (concat);
}
