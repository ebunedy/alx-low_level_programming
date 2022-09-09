#include <stdlib.h>
#include <stdio.h>
/**
 *main - that print alphabet in lowercase
 *and uppercase and a new line
 * Return: 0 on success
 */
int main(void)
{
	int hexa  = '0';

	while (hexa <= '9')
	{
		putchar(hexa);
		hexa++;
	}
        hexa = 'a';
	while (hexa <= 'f')
	{
		putchar(hexa);
		hexa++;
	}
	putchar('\n');
	return (0);
}

