#include <stdio.h>

/**
 * _strncat - concat two strings
 * @src: source string
 * @dest: destination string
 * @n: the length to concat from src
 * Return: the new string
 **/

char *_strncat(char *dest, char *src, int n)
{
	int j, i;

	j = 0;
	i = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0' && i < n)
	{
		dest[j + i] = src[i];
		i++;
	}
	return (dest);
}
