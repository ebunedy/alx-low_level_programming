#include <stdio.h>
#include "main.h"

/**
 *print_numbers - print 0-9
 * Return: 0-9
*/

void print_numbers(void)
{
	int i = 0;

	while (0 <= 9)
	{
		_putchar(i + '0');
		i++;
	}

	_putchar('\n');
}
