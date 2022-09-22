#include <stdio.h>

/**
 * _strncpy - copy src strings to dest string
 * @src: source string
 * @dest: destination string
 * @n: the length to concat from src
 * Return: the new string
 **/

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
		dest[j++] = '\0';
	return (dest);
}
