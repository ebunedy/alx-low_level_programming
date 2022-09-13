#include <stdio.h>
#include "main.h"

/**
 *_islower - print 1 if c is lowercase character and 0 if ti is not
 * @c: character to test
 * Return: 0 on success
*/

int _islower(int c)
{

	if (c > 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
