#include "main.h"
/**
 * print_times_table - a function that prints
 * the n times table, starting with 0.
 *
 * @n: the input
*/

void print_times_table(int n)
{
	int num1;
	int num2;
	int num3;

	if (n <= 15 && n >= 0)
	{
		for (num3 = 0; num3 <= n; num3++)
		{
			_putchar(48);
			for (num2 = 1; num2 <= n; num2++)
			{
				_putchar(',');
				_putchar(' ');

				num1 = num3 * num2;

				if (num1 <= 9)
					_putchar(' ');
				if (num1 <= 99)
					_putchar(' ');

				if (num1 >= 100)
				{
					_putchar((num1 / 100) + 48);
					_putchar((num1 / 10) % 10 + 48);
				}
				else if (num1 <= 99 && num1 >= 10)
					_putchar((num1 / 10) + 48);
				_putchar((num1 % 10) + 48);
			}
			_putchar('\n');
		}
	}
}

