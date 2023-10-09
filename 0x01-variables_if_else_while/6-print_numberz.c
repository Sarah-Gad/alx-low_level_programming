#include <stdio.h>
/**
 * main - Enrty point of the program
 *
 * Description: this program prints all single digit
 * numbers of base 10 starting from 0 with putchar function.
 *
 * Return: always 0 (Success)
*/
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		putchar(num + 48);
		num = num + 1;
	}
	putchar('\n');
	return (0);
}
