#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - a function that returns a
 * pointer to a newly allocated space
 * in memory, which contains a copy of
 * the string given as a parameter
 *
 * @str: the string to be copied.
 *
 * Return: pointer to the new string
 * or NULL.
*/
char *_strdup(char *str)
{
	char *p;
	int ind;
	int a;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (ind = 0; str[ind] != '\0'; ind++)
		{
		}
		p = malloc(ind * sizeof(char));
		if (p == NULL)
		{
			return (NULL);
		}
		else
		{
			for (a = 0; a < ind; a++)
			{
				p[a] = str[a];
			}
		}
		return (p);
	}
}
