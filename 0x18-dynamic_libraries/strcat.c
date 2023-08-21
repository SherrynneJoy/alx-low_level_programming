#include "main.h"

/**
 * _strcat - concatenates strings
 * @dest: first string
 * @src: second string
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	char *result;
	int i = 0;

	if (dest == NULL || src == NULL)
		return (NULL);
	result = dest;
	while (result[i] != '\0')
		result++;
	while (src[i] != '\0')
	{
		result[i] = src[i];
		result++;
		src++;
	}
	result = '\0';
	return (dest);
}
