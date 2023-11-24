#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n: the binary number
 * @index: the index starting from 0
 * Return: the value of the bit at index or -1
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);
	return ((n & (1 << index)) >> index);
}
