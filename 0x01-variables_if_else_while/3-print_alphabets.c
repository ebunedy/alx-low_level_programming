#include <stdlib.h>
#include <stdio.h>
/**
 *main - that print alphabet in lowercase
 *and uppercase and a new line
 * Return: 0 on success
 */
int main(void)
{
	char lower  = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}

