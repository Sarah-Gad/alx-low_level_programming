#include "main.h"

/**
 * flip_bits - a function that returns the number of bits I
 * would need to flip to get from one number to another.
 * @n: first binary num
 * @m: seconf binary num
 * Return: the num of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int o;
	unsigned long int i = 0;

	o = n ^ m;

	while (o)
	{
		if (o & 1)
			i++;
		o = o >> 1;
	}
	return (i);
}
