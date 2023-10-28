#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 *
 * @dest: the memory area to be filled.
 * @src: the source memory area.
 * @n: the number of bytes.
 *
 * Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
