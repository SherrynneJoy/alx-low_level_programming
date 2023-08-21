#include "main.h"

/**
 * _atoi - converts a character to an integer
 * @s: pointer to a string
 * Return: 0 when successful
 */
int _atoi(char *s)
{
	int result = 0;
	int num = 1;

	if (*s == '-')
	{
		num = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}
	return (result * num);
}
