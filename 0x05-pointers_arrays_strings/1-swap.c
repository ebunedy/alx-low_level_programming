#include <stdio.h>

/**
 * swap_int - switches value of first input with the value of the second input.
 * @a: First input to swap.
 * @b: Second input to swap.
 **/

void swap_int(int *a, int *b)
{
	int tmpval;

	tmpval = *a;
	*a = *b;
	*b = tmpval;
}
