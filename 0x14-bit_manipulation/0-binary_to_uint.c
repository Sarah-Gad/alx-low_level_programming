#include "main.h"
/**
 * binary_to_uint - a function that converts
 * a binary number to an unsigned int.
 * @b: pointer to the binary string.
 * Return: the converted number, or 0.
*/
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int res = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '1')
		{
			res = (res << 1) | 1;
		}
		else if (b[i] == '0')
		{
			res = res << 1;
		}
		else
		{
			return (0);
		}
		i++;
	}

	return (res);
}

