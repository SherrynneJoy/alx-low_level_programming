#include "calc.h"
#include <stdio.h>

/**
 * get_op_func - function pointer
 * @s: operator passed as argument to the program
 * Return: the right operator
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	if (s == NULL)
		return (NULL);
	printf("Enter your choice: 0 for op_ad, 1 for op_sub,
			2 for op_mul, 3 for op_div, 4 for op_mod:\n");
	scanf("%d", &ops);
	printf("Enter the two numbers:\n");
	scanf("%d %d", &a, &b);
	printf("%d", get_op_func[ops](i));
	return (0);
}
