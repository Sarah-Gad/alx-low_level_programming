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
		for (num1 = 0; num1 <= n; ++num1)
		{
			_putchar(48);
			for (num2 = 1; num2 <= n; ++num2)
			{
				_putchar(',');
				_putchar(' ');

				num3 = num1 * num2;

				if (num3 <= 9)
					_putchar(' ');
				if (num3 <= 99)
					_putchar(' ');
				if (num3 >= 100)
				{
					_putchar((num3 / 100) + 48);
					_putchar((num3 / 10) + 48);
				}
				elsr if (num3 <= 99 && num3 >= 10)
					_putchar((num3 / 10) + 48);
				_putchar((num3 % 10) + 48);
			}
			_putchar('\n');
		}
	}
}

