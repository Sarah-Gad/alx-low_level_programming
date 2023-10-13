#include "main.h"
/**
 * print_triangle - a function that prints
 * a triangle, followed by a new line.
 *
 * @size: input
*/

void print_triangle(int size)
{
	int row;
	int column;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
		for (column = 1; column <= size; column++)
		{
			for (row = 1; row <= size; row++)
			{
				if ((column + row) <= size)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(35);
				}
			}
			_putchar('\n');
		}
}
