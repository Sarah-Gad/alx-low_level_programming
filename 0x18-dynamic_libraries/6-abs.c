#include "main.h"
/**
 * _abs - a function that computes
 * the absolute value of an integer.
 *
 * @n: checks the input of the function
 *
 * Return: Always 0 (success)
*/
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
