#include "main.h"
/**
 * print_diagonal - a function that draws
 * a diagonal line on the terminal.
 *
 * @num: input
*/

void print_diagonal(int num)
{
	int l_num;
	int s_num;

	if (num == 0 || num < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l_num = 1; l_num <= num; l_num++)
		{
			for (s_num = 1; s_num < l_num; s_num++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
