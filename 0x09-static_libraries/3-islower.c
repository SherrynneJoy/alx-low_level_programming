#include "main.h"

/**
 * _islower - is a function that checks for lower case characters
 * @c: prints character c
 * Return: 1 if it is a lower case character and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	return (1);
	else
	return (0);
}
