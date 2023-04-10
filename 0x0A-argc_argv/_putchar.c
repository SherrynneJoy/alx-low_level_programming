#include <stdio.h>
#include "main.h"

/**
 * _putchar - converst the character c to standard output
 * @c: character to be printed
 * Return: 1 when it evaluates successfully and -1 in the event of an error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
