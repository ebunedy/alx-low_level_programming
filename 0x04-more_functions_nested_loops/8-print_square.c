#include <stdio.h>
#include "main.h"

/**
 * print_square - draws a square across (n) terminal lines.
 * @size: the number of # to print.
 **/

void print_square(int size)
{
	int i, j;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			for (i = 0; i < j; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
