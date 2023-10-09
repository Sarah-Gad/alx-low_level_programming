#include <stdio.h>
/**
 * main - Enrty point of the program
 *
 * Description: this program prints the lowercase
 * alphabet in reverse, followed by a new line.
 *
 * Return: always 0 (Success)
*/
int main(void)
{
	char alpha;

	alpha = 'z';
	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha = alpha - 1;
	}
	putchar('\n');
	return (0);
}
