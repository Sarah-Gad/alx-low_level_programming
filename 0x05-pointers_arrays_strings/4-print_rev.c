#include "main.h"
/**
 * print_rev - a function that prints
 * a string, in reverse, followed by a new line.
 *
 * @s: the string input.
*/

void print_rev(char *s)
{
	int count;

	count = 0;

	while (s[count])
	{
		count++;
	}
	while (count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
