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
	int i = 0;
	int *pt;

	if (min > max)
	{
		return (NULL);
	}
	pt = malloc((max - min + 1) * sizeof(int));
	if (pt == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= max - min; i++)
	{
		pt[i] = min + i;
	}
	return (pt);
}
