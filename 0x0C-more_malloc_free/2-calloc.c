#include "main.h"
#include <stdlib.h>
/**
 * _calloc -  a function that allocates
 * memory for an array, using malloc.
 *
 * @nmemb: number of elements of the array.
 * @size: size of data type in bytes.
 *
 * Return: pointer or NULL.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pt;
	unsigned int a;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	pt = malloc(size * nmemb);
	if (pt == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < (size * nmemb); a++)
	{
		pt[a] = 0;
	}
	return (pt);
}
