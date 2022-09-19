#include <stdio.h>

/**
 * _strlen - return the length of a string
 * @s: input to check.
 * Return: string length
 **/

int _strlen(char *s)
{
	int j;

	j = 0;
	while (*s != '\0')
	{
		j++;
		s++;
	}
	return (j);
}
