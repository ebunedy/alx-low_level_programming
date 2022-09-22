#include <stdio.h>

/**
 * reverse_array - reverses an array
 * @a: array to reverse
 * @n: array length
 * Return: 1
 **/

void reverse_array(int *a, int n)
{
	int i, temp;

	i = temp =  0;
	n -= 1;
	while (i <= n)
	{
		temp = a[n];
		a[n--] = a[i];
		a[i++] = temp;
	}
}
