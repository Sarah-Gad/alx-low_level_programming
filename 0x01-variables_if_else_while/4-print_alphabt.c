#include <stdio.h>
/**
 * main - Enrty point of the program
 *
 * Description: this program the alphabet in lowercase,
 * followed by a new line, except the letters q and e.
 *
 * Return: always 0 (Success)
*/
int main(void)
{
	char alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		if (alpha == 'e' || alpha == 'q')
		{
			alpha = alpha + 1;
		}
		putchar(alpha);
		alpha = alpha + 1;
	}
	putchar('\n');
	return (0);
}
