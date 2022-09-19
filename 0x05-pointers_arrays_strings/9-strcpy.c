#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copy array from src to a dest
 * @src: source
 * @dest: destination
 * Return: array
 **/

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
