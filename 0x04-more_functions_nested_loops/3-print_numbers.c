#include <stdio.h>
#include "main.h"

/**
 *print_numbers - print 0-9
 * Return: 0-9
*/

void print_numbers(void)
{
	char i = '0';

	while ('0' <= '9')
	{
		_putchar(i);
		i++;
	}

	_putchar('\n');
}
