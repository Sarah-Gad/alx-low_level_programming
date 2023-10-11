#include "main.h"
/**
 * print_alphabet_x10 - this function prints 10 times
 * the alphabet, in lowercase, followed by a new line.
*/
void print_alphabet_x10(void)
{
	int alpha1;
	int alpha2;

	alpha1 = 0;
	while (alpha1 < 10)
	{
		alpha2 = 'a';
		while (alpha2 <= 'z')
		{
			_putchar(alpha2);
			alpha2 = alpha2 + 1;
		}
		alpha1 = alpha1 + 1;
		_putchar('\n');
	}
}
