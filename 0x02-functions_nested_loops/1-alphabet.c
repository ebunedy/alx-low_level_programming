#include <stdio.h>
#include "main.h"

/**
 *print_alphabet - that print alphabet in lowercase
 * Return: 0 on success
*/

void print_alphabet(void)
{
	char alphabet  = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
