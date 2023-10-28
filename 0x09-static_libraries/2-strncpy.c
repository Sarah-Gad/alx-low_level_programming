#include "main.h"
/**
 * * _strncpy - a function that
 * copies a string.
 *
 * @dest: pointer to the first string.
 * @src: pointer to the second string.
 * @n: number of bytes.
 *
 * Return: (dest)
*/

char *_strncpy(char *dest, char *src, int n)
{
	int a;


	for (a = 0; src[a] != '\0' && a < n; a++)
	{
		dest[a] = src[a];
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}


	return (dest);
}
