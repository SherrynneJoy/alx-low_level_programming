#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes
 * @argc: argument count
 * @argv: argument vector
 * Return: opcodes
 */

int main(int argc, char *argv[])
{
	int number_of_bytes;
	FILE *fp;
	int i;
	char c;

	fp = fopen(argv[0], "r");
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	number_of_bytes = atoi(argv[1]);
	if (argv[1] < 0)
	{
		printf("Error\n");
		exit(2);
	}
	i = 0;
	while (i < number_of_bytes && (c = getc(fp) != EOF))
	{
		printf("%2x", c);
		if (i < number_of_bytes - 1)
		{
			printf(" ");
		}
		i++;
	}
	printf("\n");
	return (0);
	fclose(fp);
}
