#include <stdio.h>

/**
 * main - is the main function
 * Return: 0 if it evaluates successfully
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
