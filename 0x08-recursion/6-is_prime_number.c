#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - prints a prime number
 * @n: number to be printed
 * Return: 0 when it evaluates
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - checks if a number is a prime number
 * @i: iterator
 * @n: number to be checked
 * Return: prime number
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
