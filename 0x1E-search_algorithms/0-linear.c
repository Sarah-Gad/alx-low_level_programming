#include "search_algos.h"
/**
* linear_search - This fucntion searches for a value
* in an array of integers using the Linear search algorithm
* @array: pointer to the first element of the array to search in
* @size: is the number of elements in array
* @value: is the value to search for
* Return: the first index where value is located
*/
int linear_search(int *array, size_t size, int value)
{
	size_t found_at = 0;

	if (array == NULL)
		return (-1);
	while (found_at <= size)
	{
		if (array[found_at] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", found_at, array[found_at]);
			return (found_at);
		}
		printf("Value checked array[%ld] = [%d]\n", found_at, array[found_at]);
		found_at++;
	}
	return (-1);
}
