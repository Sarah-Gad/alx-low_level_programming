#include "main.h"
#include <stdlib.h>
/**
 * array_range - a function that
 * creates an array of integers.
 * @min: the number to start from.
 * @max: the number to stop at.
 * Return: a pointer or NULL.
*/
int *array_range(int min, int max)
{
	int *pt;
	int size;
	int indx;

	if (min > max)
	{
		return (NULL);
	}
	for (size = 1; min != max; min++)
	{
		size++;
	}
	pt = malloc(sizeof(*pt) * size);
	if (pt == NULL)
	{
		return (NULL);
	}
	for (indx = 0; indx < size; indx++)
	{
		pt[indx] = min;
		min++;
	}
	return (pt);
}
