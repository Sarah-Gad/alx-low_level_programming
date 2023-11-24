#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 * @n: a the binary num
 * @index: the index
 * Return: 1 or -1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);
	if ((*n & (1 << index)) >> index)
		*n = *n ^ (1 << index);
	return (1);
}
