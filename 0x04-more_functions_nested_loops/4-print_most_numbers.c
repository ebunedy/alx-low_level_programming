#include <stdio.h>
#include "main.h"

/**
 *print_most_numbers - print 0-9 with the exception of 2 and 4
 * Return: 0 on success
*/

void print_most_numbers(void)
{
	char i = '0';

	while (i <= '9')
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
		++i;
	}
	_putchar('\n');
}
