#include <stdio.h>
#include "main.h"
/**
 *print_line - print a line base on the value n
 * @n: value to enter
 * Return: 0 on success
*/
void print_line(int n)
{
	int i;

	if (i > n)
	{
		for (i = 0; i <= n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
