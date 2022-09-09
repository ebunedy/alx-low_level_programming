#include <stdlib.h>
#include <stdio.h>
/**
 *main - prints all possible different combinations of three digits.
 * Return: 0 on success
 */
int main(void)

{
	int i  = '0';
	int j = '1';
	int k = '2';

	while (i < '8')
	{
		while (j <= '8')
		{
			while (k <= '9')
			{

				putchar(i);
				putchar(j);
				putchar(k);

				if (!(i == '7' && j == '8' && k == '9'))
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
			k = j + 1;
		}
		i++;
		j = i + 1;
		k = j + 1;
	}
	putchar('\n');
	return (0);
}
