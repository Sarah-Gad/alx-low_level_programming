#include "main.h"
/**
 * *_strncat - a function that
 * concatenates two strings.
 *
 * @dest:pointer to the first string.
 * @src: pointer to the second string.
 * @n: number of bytes.
 *
 * Return: (dest).
*/

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b;

	while (dest[a])
	{
		a++;
	}

	for (b = 0; src[b] != '\0' && b < n; b++)
	{
		dest[a + b] = src[b];

	}

	dest[a + b] = '\0';

	return (dest);
}
