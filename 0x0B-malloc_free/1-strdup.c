#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - creates a duplicate of a string
 * @str: a pointer to a char
 * Return: 0 when it evaluates
 */

char *_strdup(char *str)
{
	int i;
	char *t;
	int n;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	t = malloc(sizeof(char) * (i + 1));

	if (t == NULL)
		return (NULL);
	for (n = 0; str[n]; n++)
		t[n] = str[n];
	return (t);

	return (t);
}
