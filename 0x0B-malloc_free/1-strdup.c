#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @*str: pointer to a char
 * @str: a string
 * Return: 0 when it evaluates successfully
 */

char *_strdup(char *str)
{
	char *aaa;
	int m, n = 0;

	if (str == NULL)
		return (NULL);
	m = 0;
	while (str[m] != '\0')
		m++;

	aaa = malloc(sizeof(char) * (m + 1));
	if (aaa == NULL)
		return (NULL);
	for (n = 0; str[n]; n++)
		aaa[n] = str[n];

	return (aaa);
}
