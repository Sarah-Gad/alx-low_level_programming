#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function that
 * prints the sum of the two
 * diagonals of a square matrix
 * of integers.
 *
 * @a: the array
 * @size: size of the array
*/

void print_diagsums(int *a, int size)
{
	int b;
	int sum1 = 0;
	int sum2 = 0;

	for (b = 0; b < size; b++)
	{
		sum1 += a[b];
		sum2 += a[size - b - 1];
		a += size;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}

