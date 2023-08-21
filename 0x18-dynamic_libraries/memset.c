#include "main.h"
/**
* _memset - fills bytes of memory
* @s: pointer to a string
* @b: character
* @n: integer
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
