#include "search_algos.h"
#include <stdio.h>

/**
* binary_search_recursive - This fuction is Helper function for the next func
* @array: Pointer to the first element of the array to search in
* @low: The lower index of the current search range
* @high: The higher index of the current search range
* @value: The value to search for
* Return: The index where value is located
*/
int binary_search_recursive(int *array, size_t low, size_t high, int value)
{
	size_t mid = low + (high - low) / 2;
	size_t i;

	if (low > high)
		return (-1);

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
	}
	printf("\n");

	if (array[mid] == value)
		return (mid);
	else if (array[mid] < value)
		return (binary_search_recursive(array, mid + 1, high, value));
	else
		return (binary_search_recursive(array, low, mid - 1, value));
}

/**
* binary_search - This function searches for a value in an array
* @array: Pointer to the first element of the array to search in
* @size: The number of elements in array
* @value: The value to search for
* Return: The index where value is located.
*/
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (binary_search_recursive(array, 0, size - 1, value));
}
