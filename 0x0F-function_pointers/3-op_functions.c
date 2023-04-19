#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - adds two numbers
 * @a: first integer
 * @b: second integer
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - gets the difference between two numbers
 * @a: first number
 * @b: second number
 * Return: the difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: first number to be multiplied
 * @b: second number to be multiplied
 * Return: result of the multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: first integer
 * @b: second integer
 * Return: result of the division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the remainder of a division
 * @a: first number
 * @b: second number
 * Return: modulo or remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
