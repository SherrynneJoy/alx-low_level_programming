#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 when it evaluates
 */

int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
