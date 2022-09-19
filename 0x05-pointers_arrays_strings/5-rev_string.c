#include <stdio.h>
#include "main.h"

/**
 * rev_string - print string in reverse
 * @s: input to print
 **/

void rev_string(char *s)
{
	char *str = s;

	_puts(str);
	print_rev(str);
}
