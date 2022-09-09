#include <stdlib.h>
#include <stdio.h>
/**
 *main - prints all possible different combinations of two digits.
 * Return: 0 on success
 */
int main(void)

{
	int i  = '0';
	int j = '1';

	while (i < '9')
	{
		while (j <= '9')
		{
			putchar(i);
			putchar(j);

			if (!(i == '8' && j == '9'))
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
		j = i + 1;
	}
	putchar('\n');
	return (0);
}
