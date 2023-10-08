#include <stdio.h>
/**
 * main - Enrty point of the program
 *
 * Description: this program prints all single digit numbers
 * of base 10 starting from 0, followed by a new line.
 *
 * Return: always 0 (Success)
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num = num + 1)
	{
		printf("%d", num);
	}
	putchar('\n');
	return (0);
}
