#include <stdio.h>
#include "main.h"

/**
 *_isdigit - print 1 if c is uppercase character and 0 if it is not
 * @c: character to test
 * Return: 0 on success
*/

int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
