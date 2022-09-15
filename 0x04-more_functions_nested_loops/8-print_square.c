#include <stdio.h>
#include "main.h"

/**
 * print_square - draws a square across (n) terminal lines.
 * @size: the number of # to print.
 **/

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (j = 0; j < size; j++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
