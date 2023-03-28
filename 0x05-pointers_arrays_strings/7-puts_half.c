#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 * if lenght is odd, n = (length_of_the_string - 1) / 2
 * Return: half of the string
 */

void puts_half(char *str)
{
	int longi;
	int m;
	int n;

	longi = 0;

	for (m = 0; str[m] != '\0'; m++)
		longi++;

	n = (longi / 2);
	if  ((longi % 2) == 1)
		n = ((longi + 1) / 2);

	for (m = n; str[m] != '\0'; m++)
		_putchar(str[m]);
	_putchar('\n');
}
