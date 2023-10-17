#include "main.h"
/**
 * print_array - a function that prints
 * n elements of an array of integers,
 * followed by a new line.
 *
 * @a: pointer to the array
 * @n: number of elements of
 * the array to be printed
*/

void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		if (count != (n - 1))
			printf("%d, ", a[count]);
		else
			printf("%d", a[count]);
	}
	printf("\n");
}
