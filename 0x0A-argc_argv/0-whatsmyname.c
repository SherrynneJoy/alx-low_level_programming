#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: counts number of arguments
 * @argv: shows vector of arguments
 * Return: 0 when it evaluates successfully
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
