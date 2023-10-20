#include "main.h"
/**
 * _strcmp - a function that
 * compares two strings.
 *
 * @s1: pointer to first string.
 * @s2: pointer to second string
 *
 * Return: 1 if true, 0 if false.
*/

int _strcmp(char *s1, char *s2)
{
	int comp = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			comp = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (comp);
}

