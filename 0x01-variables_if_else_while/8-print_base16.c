#include <stdio.h>

/**
 * main - is the main function
 * Return: 0 when it evaluates successfully
 */

int main(void)
{
	int i;
	char m;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (m = 'a' ; m <= 'f' ; m++)
	putchar(m);
	putchar('\n');
	return (0);
}
