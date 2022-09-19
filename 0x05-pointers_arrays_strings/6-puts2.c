#include <stdio.h>
#include "main.h"

/**
 * puts2 - print string in reverse
 * @str: input to print
 **/

void puts2(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		if (j % 2 == 0)
			_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
