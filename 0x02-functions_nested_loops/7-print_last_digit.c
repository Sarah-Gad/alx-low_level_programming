#include "main.h"
/**
 * print_last_digit - a function that
 * prints the last digit of a number.
 *
 * @n: checks the input of the function
 *
 * Return: l_num
*/

int print_last_digit(int n)
{
	int l_num;

	if (n < 0)
		l_num = -1 * (n % 10);
	else
		l_num = n % 10;

	_putchar(l_num + 48);
	return (l_num);
}

