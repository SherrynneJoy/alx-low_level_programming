#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: number to be checked
 * Return: m
 */

int print_last_digit(int i)
{
	int m;

	m = i % 10;
	if (i < 0)
		m = -m;
	return (m);
}
