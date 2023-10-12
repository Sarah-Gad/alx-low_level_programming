#include "main.h"
/**
 * print_most_numbers - a function that
 * prints the numbers, from 0 to 9,
 * followed by a new line, except 2 and 4.
*/

void print_most_numbers(void)
{
	int nums;

	for (nums = 48; nums <= 57; nums++)
	{
		if (nums == 50 || nums == 52)
		{
			continue;
		}
		_putchar(nums);
	}
	_putchar('\n');
}
