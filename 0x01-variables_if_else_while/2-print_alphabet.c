#include <stdio.h>
/**
 * main - Enrty point of the program
 *
 * Description: this program prints the
 *alphabet in lowercase, followed by a new line.
 *
 * Return: always 0 (Success)
*/
int main(void)
{
	char alpha;

	alpha = 'a';
		while (alpha <= 'z')
		{
			putchar(alpha);
			alpha = alpha + 1;
		}
	putchar('\n');
	return (0);
}

