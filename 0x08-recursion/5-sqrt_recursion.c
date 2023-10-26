#include "main.h"

/**
 *hlp - a function that helps to get
 *the natural square root of a number
 *@n: the numbe to get the square root to
 *@i: the square root to n
 *Return: the value of sqr root
*/

int hlp(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (hlp(n, i + 1));
	}
}

/**
 * _sqrt_recursion - a function that returns
 * the natural square root of a number
 * @n: the number to get the square root to
 * Return: the value of sqr root
*/

int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
	{
		return (-1);
	}
	else
	{
		i = hlp(n, 0);
		if (i * i == n)
		{
			return (i);
		}
		else
		{
			return (-1);
		}
	}
}
