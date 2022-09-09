#include <stdlib.h>
#include <stdio.h>
/**
 *main - that print alphabet in lowercase
 * Return: 0 on success
 */
int main(void)
{
	char alphabet  = 'a';

	while (alphabet <= 'z');
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}

