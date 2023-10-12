#include "main.h"
/**
 * print_numbers - a function that prints the
 * numbers, from 0 to 9, followed by a new line.
 *
*/

void print_numbers(void)
{
	int nums;

	for (nums = 48; nums <= 57; nums++)
	{
		_putchar(nums);
	}
	_putchar('\n');
}
