#include <stdio.h>
#include "main.h"
/**
 *more_numbers - print 0-14 ten times
 *Return: 0 on success
*/
void more_numbers(void)
{
	char i = 0;
	char j = 0;

	while (i < 10)
	{
		while (j <= 14)
		{
			if (j >= 10)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			++j;
		}
		_putchar('\n');
		j = 0;
		++i;
	}
}
