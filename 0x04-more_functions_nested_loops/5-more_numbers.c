#include "main.h"
/**
 * more_numbers - a function that prints
 * 10 times the numbers, from 0 to 14,
 * followed by a new line.
*/

void more_numbers(void)
{
	int num_l;
	int num_c;
	int nums;

	for (num_l = 0; num_l < 10; num_l++)
	{
		for (num_c = 0; num_c <= 14; num_c++)
		{
			nums = num_c;
			if (num_c > 9)
			{
				_putchar(1 + 48);
				nums = num_c % 10;
			}
			_putchar(nums + 48);
		}
		_putchar('\n');
	}
}
