#include <stdlib.h>
#include <stdio.h>
/**
 *main -print all the numbers of base 16 in lowercase, followed by a new line.
 * Return: 0 on success
 */

int main(void)
{
	int i  = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}

	putchar('\n');
	return (0);
}
