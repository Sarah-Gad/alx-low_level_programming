#include "variadic_functions.h"
/**
 * sum_them_all - a function that
 * returns the sum of all its parameters.
 * @n: the number of parameters.
 * Return: the sum of numbers.
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int indx;
	int sum = 0;
	va_list s_pr;

	if (n == 0)
		return (0);
	va_start(s_pr, n);
	for (indx = 0; indx < n; indx++)
	{
		sum += va_arg(s_pr, int);
	}
	va_end(s_pr);
	return (sum);
}
