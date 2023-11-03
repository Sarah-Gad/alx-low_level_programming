#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - a function
 * that allocates memory using malloc.
 *
 * @b: number of bytes to allocate
 *
 * Return: apointer or value of 98.
*/
void *malloc_checked(unsigned int b)
{
	void *pt;

	pt = malloc(b);
	if (pt == NULL)
	{
		exit(98);
	}
	return (pt);
}
