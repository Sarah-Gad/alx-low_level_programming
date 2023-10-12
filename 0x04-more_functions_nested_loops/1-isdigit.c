#include "main.h"
/**
 * _isdigit - a function that checks
 * for a digit (0 through 9).
 *
 * @dig: input
 *
 * Return: 1 if dig is a digit
 * 0 otherwise
*/

int _isdigit(int dig)
{
	if (dig >= 48 && dig <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
