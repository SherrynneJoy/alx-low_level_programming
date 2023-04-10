#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @j: string to be converted
 * Return: 0 when it evaluates
 */

int _atoi(char *j)
{
	int a, b, c, len, g, digit;

	a = 0;
	b = 0;
	c = 0;
	len = 0;
	g = 0;
	digit = 0;

	while (j[len] != '\0')
		len++;

	while (a < len && g == 0)
	{
		if (j[a] == '-')
			++b;

	if (j[a] >= '0' && j[a] <= '9')
	{
		digit = j[a] - '0';
		if (b % 2)
			digit = -digit;
		c = c * 10 + digit;
		g = 1;
		if (j[a + 1] < '0' || j[a + 1]  > '9')
			break;
		g = 0;
	}
	a++;
	}
	if (g == 0)
	return (0);
	return (c);
}

/**
 * main - multiplies two numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 when it evaluates successfully and 1 when there's an Error
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
