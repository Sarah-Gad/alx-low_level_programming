#include "main.h"
#include <stdlib.h>

/**
 * _realloc - a function that reallocates
 * memory block using malloc and free
 * @ptr: pointer to the block of memore to be rellocated
 * @old_size: hte old size
 * @new_size: the new size
 * Return: null ptr
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *n_pt;
	unsigned int msize;
	unsigned int i = 0;
	char *p;
	char *np;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		n_pt = malloc(new_size);
		return (n_pt);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	n_pt = malloc(new_size);
	if (n_pt == NULL)
		return (NULL);
	msize = old_size < new_size ? old_size : new_size;
	p = (char *) ptr;
	np = (char *) n_pt;
	for (i = 0; i < msize; i++)
	{
		np[i] = p[i];
	}
	free(ptr);
	return (n_pt);
}
