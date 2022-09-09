#include <stdlib.h>
#include <stdio.h>
/**
 *main - that print alphabet in lowercase and in reverse
 * Return: 0 on success
 */
int main(void)
{
	char lower  = 'z';

	while (lower >= 'a')
	{
		putchar(lower);
		lower--;
	}

	putchar('\n');
	return (0);
}

