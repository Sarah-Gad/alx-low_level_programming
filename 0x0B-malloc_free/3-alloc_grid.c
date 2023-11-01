#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - a function that
 * returns a pointer to a 2
 * dimensional array of integers.
 *
 * @width: represents rows.
 * @height: represents colunms.
 *
 * Return: pointer to the array
 * or NULL.
*/
int **alloc_grid(int width, int height)
{
	int **arr_2;
	int i = 0;
	int j = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr_2 = malloc(height * sizeof(int *));

	if (arr_2 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr_2[i] = malloc(width * sizeof(int));

		if (arr_2[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(arr_2[j]);
			}
			free(arr_2);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			arr_2[i][j] = 0;
		}
	}
	return (arr_2);
}
