#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 always
 */

char *str_concat(char *s1, char *s2)
{
	int s1_length = strlen(s1);
	int s2_length = strlen(s2);
	int size = s1_length + s2_length + 1;
	char *t = malloc(sizeof(char) * (s1_length + s2_length + 1));
	int i;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	if (!t)
		return (NULL);
	for (i = 0; i < s1_length; i++)
		t[i] = s1[i];
	for (i = 0; i < s2_length; i++)
		t[s1_length + i] = s2[i];
	t[size - 1] = '\0';

	return (t);
}
