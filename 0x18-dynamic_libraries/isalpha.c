#include "main.h"

/**
 * _isalpha - checks for alphabet letters
 * @c: an integer
 * Return: 0 when successful
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
