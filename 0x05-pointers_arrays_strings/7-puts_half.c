#include <stdio.h>
#include "main.h"

/**
 * puts_half - print half a string. followed by a new line
 * @str: input to print
 **/

void puts_half(char *str)
{
	int j, i;

	while (str[j] != '\0')
	{
		j++;
	}
	if (i % 2 == 0)
		i = j / 2;
	else
		i = (j + 1) / 2;
	while (i < j)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
