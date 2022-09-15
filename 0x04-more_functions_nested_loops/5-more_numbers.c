#include <stdio.h>
#include "main.h"
/**
 *more_numbers - print 0-14 ten times
 *Return: 0 on success
*/
void more_numbers(void)
{
	char i = '0';
	char j = '0';

	while (i < '10')
	{
		while (j <= '14')
		{
			_putchar(i);
			++j;
		}
		_putchar('\n');
		++i;
	}
	_putchar('\n');
}
