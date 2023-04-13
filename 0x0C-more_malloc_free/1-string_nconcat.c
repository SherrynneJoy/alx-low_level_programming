#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: integer
 * Return: newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *j;
	unsigned int m = 0, p = 0, length1 = 0, length2 = 0;

	while (s1 && s1[length1])
		length1++;
	while (s2 && s2[length2])
		length2++;
	if (n < length2)
		j = malloc((length1 + n + 1) * sizeof(char));
	else
		j = malloc((length1 + length2 + 1) * sizeof(char));

	if (!j)
		return (NULL);
	while (m < length1)
	{
		j[m] = s1[m];
		m++;
	}
	while (n < length2 && m < (length1 + n))
		j[m++] = s2[p++];
	while (n >= length2 && m < (length1 + length2))
		j[m++] = s2[p++];

	j[m] = '\0';

	return (j);
}

