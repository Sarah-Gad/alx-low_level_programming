#include "main.h"
/**
 * main - Enrty point of the program
 *
 * Description: this program prints
 * _putchar, followed by a new line.
 *
 * Return: always 0 (Success)
*/
int main(void)
{
	char str[] = "_putchar";
	int chr;

	for (chr = 0; chr < 8; chr = chr + 1)
		_putchar(str[chr]);
	_putchar('\n');
	return (0);
}
