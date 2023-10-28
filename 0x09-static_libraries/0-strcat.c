#include "main.h"
/**
 * *_strcat - a function that
 * concatenates two strings.
 *
 * @dest: the pointer to the first string.
 * @src: the pointer to the secod string.
 *
 * Return: dest string
*/

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (dest[a])
	{
		a++;
	}

	for (b = 0; src[b]; b++)
	{
		dest[a++] = src[b];
	}

	return (dest);

}
