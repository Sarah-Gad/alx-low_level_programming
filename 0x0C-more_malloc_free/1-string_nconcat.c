#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat -  a function
 * that concatenates two strings.
 *
 * @s1: the first string
 * @s2: the second string
 * @n: number of bytes of
 * the s2 to concatenate.
 *
 * Return: pointer or NULL.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pt;
	int lengs1, a;
	unsigned int b;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (lengs1 = 0; s1[lengs1] != '\0'; lengs1++)
	{
	}
	pt = malloc(sizeof(*pt) * (lengs1 + n + 1));
	if (pt == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < lengs1; a++)
	{
		pt[a] = s1[a];
	}
	for (b = 0; b < n; b++)
	{
		pt[a + b] = s2[b];
	}
	pt[a + b] = '\0';
	return (pt);
}
