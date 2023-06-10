#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * is_number - checks if a string is a digit
 * @str: a string array
 * Return: 0 always
 */

int is_number(char *str)
{
	unsigned int i;

	i = 0;
	while (i < strlen(str))
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	i++;
	}
	return (1);
}

/**
 * main - prints the sum of positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	int str_to_int;

	i = 1;
	while (i < argc)
	{
		if (is_number(argv[i]))
		{
			str_to_int = atoi(argv[i]);
			sum = sum + str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
