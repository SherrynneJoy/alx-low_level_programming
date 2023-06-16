#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates strings
 * @s1: string one
 * @s2: second string
 * @n: an integer
 * Return: pointer to allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int s1_len = strlen(s1);
	unsigned int s2_len = strlen(s2);
	unsigned int i;

	if (n < s2_len)
		ptr = malloc(sizeof(char) * (s1_len + n +1));
	else
		ptr = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
	ptr[i] = s1[i];

	for (i = 0; i < s2_len; i++)
	ptr[s1_len + i] = s2[i];
	ptr[s1_len + s2_len] = '\0';

	return (ptr);
}
