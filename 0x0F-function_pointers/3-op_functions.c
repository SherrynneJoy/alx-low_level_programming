#include "3-calc.h"
#include <stdio.h>

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
 * op_sub - subtracts two numbers
 * @a: first integer
 * @b: second integer
 * Return: result of subtraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: first integer
 * @b: second integer
 * Return: result of multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: first integer
 * @b: second integer
 * Return: result of division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - gives the modulo of two numbers
 * @a: first integer
 * @b: second integer
 * Return: remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
