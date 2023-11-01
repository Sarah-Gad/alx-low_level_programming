#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that
 * concatenates two strings.
 *
 * @s1: the first string to ba added.
 * @s2: the second string to be added.
 *
 * Return: a pointer to the new string
 * or NULL.
*/

char *str_concat(char *s1, char *s2)
{
	int leng1;
	int leng2;
	int a;
	int b;
	char *con;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (leng1 = 0; s1[leng1] != '\0'; leng1++)
	{
	}
	for (leng2 = 0; s2[leng2] != '\0'; leng2++)
	{
	}
	con = malloc((leng1 + leng2 + 1) * sizeof(char));
	if (con == NULL)
	{
		return (NULL);
	}
	else
	{
		for (a = 0; a < leng1; a++)
		{
			con[a] = s1[a];
		}
		for (b = 0; b < leng2; b++)
		{
			con[a + b] = s2[b];
		}
		con[a + b] = '\0';
		return (con);
	}
}

