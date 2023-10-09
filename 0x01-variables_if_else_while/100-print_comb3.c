#include <stdio.h>
/**
 * main - Enrty point of the program
 *
 * Description: this program ptints all possible
 * different combinations of two digits.
 *
 * Return: always 0 (Success)
*/
int main(void)
{
	int num1;
	int num2;

	num1 = 0;
	while (num1 < 10)
	{
		num2 = 0;
		while (num2 < 10)
		{
			if (num1 != num2 && num1 < num2)
			{
				putchar(num1 + 48);
				putchar(num2 + 48);

				if (num1 + num2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			num2 = num2 + 1;
		}
		num1 = num1 + 1;
	}
	putchar('\n');
	return (0);
}
