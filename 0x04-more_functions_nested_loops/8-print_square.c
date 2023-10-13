#include "main.h"
/**
 * print_square - a function that
 * prints a square, followed by a new line.
 *
 * @size: the input
*/

void print_square(int size)
{
	int row;
	int column;

	if (size == 0 || size < 0)
	{
		_putchar('\n');
	}

	for (row = 1; row <= size; row++)
	{
		for (column = 1; column <= size; column++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
