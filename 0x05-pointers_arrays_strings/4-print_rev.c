#include <stdio.h>
#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: input to print
 **/

void print_rev(char *s)
{
	int j = 0;
	while (s[j] != '\0')
	{
		j++;
	}
	j--;
	while (s[j] != '\0')
	{
		_putchar(s[j--]);
	}
	_putchar('\n');
}
