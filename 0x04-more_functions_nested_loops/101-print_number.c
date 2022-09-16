#include <stdio.h>
#include "main.h"

/**
 * print_number - prints a number
 * @n: Input to enter
 **/

void print_number(int n)
{
		long len, res, i, tmp, exp;

		res = n;
		exp = len =  1;
		if (res < 0)
		{
			res *= -1;
			_putchar('-');
		}
		tmp = res;
		while (tmp >= 10)
		{
			len++;
			tmp /= 10;
		}
		for (i = 1; i < len; i++)
			exp *= 10;

		while (exp > 1)
		{
			_putchar((res / exp) % 10 + '0');
			exp /= 10;
		}
		_putchar(res % 10 + '0');
}
