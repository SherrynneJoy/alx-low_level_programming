#include <stdio.h>

/**
 * main - prints names
 * @argv: an argument vector
 * @argc: an argument count
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", *argv);

	return (0);
}
