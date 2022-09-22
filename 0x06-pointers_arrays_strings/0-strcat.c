#include <stdio.h>

/**
 * _strcat - concat two strings
 * @src: source string
 * @dest: destination string
 * Return: the new string
 **/

char *_strcat(char *dest, char *src)
{
	int j, i;

	j = 0;
	i = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	return (dest);
}
