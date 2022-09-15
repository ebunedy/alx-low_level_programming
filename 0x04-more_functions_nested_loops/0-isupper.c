#include <stdio.h>
#include "main.h"

/**
 *_isupper - print 1 if c is uppercase character and 0 if it is not
 * @c: character to test
 * Return: 0 on success
*/

int _isupper(int c)
{

	if (c > 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
