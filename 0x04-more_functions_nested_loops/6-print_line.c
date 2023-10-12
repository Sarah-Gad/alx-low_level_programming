#include "main.h"
/**
 * print_line - a function that draws
 * a straight line in the terminal.
 *
 * @num: input
*/

void print_line(int num)
{
	int l_num;

	if (num == 0 || num < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l_num = 1; l_num <= num; l_num++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
