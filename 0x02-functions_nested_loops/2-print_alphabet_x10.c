#include <stdio.h>
#include "main.h"

/**
 *print_alphabet_x10 - that print alphabet in lowercase
 * Return: 0 on success
*/

void print_alphabet_x10(void)
{
	char alphabet;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
