#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer
 * Return: 0 when it evaluates
 */

int _strlen_recursion(char *s)
{
	int longint = 0;

	if (*s)
	{
		longint++;
		longint = longint + _strlen_recursion(s + 1);
	}
	return (longint);
}
