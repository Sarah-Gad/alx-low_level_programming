#include "main.h"
/**
 * _memset -  a function that fills
 * memory with a constant byte.
 *
 * @s: pointer of the array.
 * @b: the constant byte.
 * @n: number of bytes of the memory area
 * that will be filled.
 *
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
