#include <stdio.h>

/**
 * string_toupper - reverses an array
 * @a: string to change to upper
 * Return: the changed string
 **/

char *string_toupper(char *a)
{
	int i;

	i = 0;
	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] -= 'a' - 'A';
		i++;
	}
	return (a);
}
