#include <string.h>
#include "main.h"

/**
 * helper - a function that returns 1 if the input integer is
 * a prime number, otherwise return 0
 * @n: the number we need to check wether prime or not
 * @i: the sqr root of the num
 * Return: one or zero
*/

int helper(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (helper(n, i + 2));
	}
}

/**
 * is_prime_number - a function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: the number we need to check wether prime or not
 * Return: one or zero
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (helper(n, 2));
	}
}
