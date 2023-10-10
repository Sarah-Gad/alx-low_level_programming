#include "main.h"
/**
 * main - Enrty point of the program
 *
 * Description: this program prints the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return: always 0 (Success)
*/
void print_alphabet(void);
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha = alpha + 1)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}

