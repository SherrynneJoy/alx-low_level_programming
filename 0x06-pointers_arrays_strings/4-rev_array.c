#include "main.h"

/**
 * reverse_array - reverses the content of the array
 * @a: pointer
 * @n: number of elements of an array
 * Return: reversed array
 */

void reverse_array(int *a, int n)
{
	int m;
	int p;

	for (m = 0; m < n--; m++)
	{
		p = a[m];
		a[m] = a[n];
		a[n] = p;
	}
}
