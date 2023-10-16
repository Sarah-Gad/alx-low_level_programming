#include "main.h"
/**
 * swap_int - a function that swaps
 * the values of two integers.
 *
 * @a: the first int to be swapped.
 * @b: the second int to be swapped.
*/

void swap_int(int *a, int *b)
{
	int n_var;

	n_var = *a;
	*a = *b;
	*b = n_var;
}
