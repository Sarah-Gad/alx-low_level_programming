#include "main.h"
/**
 * reverse_array -a function
 * that reverses the content
 * of an array of integers.
 *
 * @a: pointer to the array.
 * @n: size of array.
*/

void reverse_array(int *a, int n)
{
	int f, b, c;

	for (f = 0, b = (n - 1); f < b; f++, b--)
	{
		c = a[f];
		a[f] = a[b];
		a[b] = c;
	}
}
