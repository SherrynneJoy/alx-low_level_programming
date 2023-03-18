#include <stdio.h>

/**
 * main - is the main function
 * Return: 0 when it evaluates successfully
 */

int main(void)
{
	int i;
	int m;

	for (i = 0 ; i < 10; i++)
	{
		for (m = 0 ; m < 10 ; m++)
		{
			if (i < m && i != m)
			{
				putchar(i + '0');
				putchar(m + '0');
				if (i + m != 17)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
