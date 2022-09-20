#include <stdio.h>
#include "main.h"

/**
 * print_array - print the values of array
 * @a: input to print
 * @n: size of array
 **/

void print_array(int *a, int n)
{
	int j;

	if (n > 0)
	{
		for (j = 0; j < n; ++j)
		{
			if (j != n - 1)
				printf("%d, ", a[j]);
			else
				printf("%d", a[j]);
		}
	}
	_putchar('\n');
}
