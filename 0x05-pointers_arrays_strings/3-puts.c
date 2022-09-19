#include <stdio.h>
#include "main.h"

/**
 * _puts - print string value pass in as paramter
 * @str: input to print
 **/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
