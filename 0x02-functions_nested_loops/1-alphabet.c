#include "main.h"
/**
 * print_alphabet - this program prints the alphabet,
 * in lowercase, followed by a new line.
*/
void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha = alpha + 1)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}

