#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer.
 * @array: pointer to the array to search in.
 * @size: the size of the array
 * @cmp: pointer to the function.
 * Return: index or -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int indx;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (indx = 0; indx < size; indx++)
	{
		if ((*cmp)(array[indx]))
		{
			return (indx);
		}
	}
	return (-1);
}

