#include "main.h"
#include <stdlib.h>
/**
 * *create_array - a function that
 * creates an array of chars, and
 * initializes it with a specific char.
 *
 * @size: the size of th array
 * @c: the char to initialize
 * the array with it
 *
 * Return: pointer to the array or NULL.
*/

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		p = malloc(size * sizeof(char));

		if (p == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				p[i] = c;
			}
			return (p);
		}
	}
}
