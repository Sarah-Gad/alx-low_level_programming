#include <stdio.h>
/**
 * main - Enrty point of the program
 *
 * Description: this program ptints all possible
 * combinations of single-digit numbers.
 *
 * Return: always 0 (Success)
*/
int main(void)
{
	int comb;

	comb = 0;
	while (comb < 10)
	{
		putchar(comb + 48);
		if (comb != 9)
		{
			putchar(',');
			putchar(' ');
		}
		comb = comb + 1;
	}
	putchar('\n');
	return (0);
}
