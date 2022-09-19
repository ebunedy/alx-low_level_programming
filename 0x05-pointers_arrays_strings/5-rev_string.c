#include <stdio.h>
#include "main.h"

/**
 * rev_string - print string in reverse
 * @s: input to print
 **/

void rev_string(char *s)
{
	int i, j;
	char r[1000];

	i = j = 0;
	while (s[i] != '\0')
	{
		r[i] = s[i];
		i++;
	}
	i--;
	while (i >= 0)
	{
		s[i] = r[j];
		i--;
		j++;
	}
	s[j++] = '\0';
}
