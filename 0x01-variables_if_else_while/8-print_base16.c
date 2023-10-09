#include <stdio.h>
/**
 * main - Enrty point of the program
 *
 * Description: this program prints all the numbers of
 * base 16 in lowercase, followed by a new line.
 *
 * Return: always 0 (Success)
*/
int main(void)
{
	char hexa;

	hexa = 0;
	while (hexa < 10)
	{
		putchar(hexa + 48);
		hexa = hexa + 1;
	}
	hexa = 'a';
	while (hexa < 'g')
	{
		putchar(hexa);
		hexa = hexa + 1;
	}
	putchar('\n');
	return (0);
}

