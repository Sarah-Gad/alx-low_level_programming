#include <stdio.h>
/**
 * main - Enrty point of the program
 *
 * Description: this program ptints all possible
 * different combinations of three digits.
 *
 * Return: always 0 (Success)
*/
int main(void)
{
	int num1;
	int num2;
	int num3;

	num1 = 0;
	while (num1 < 10)
	{
		num2 = 0;
		while (num2 < 10)
		{
			num3 = 0;
			while (num3 < 10)
			{
				if (num1 != num2 &&
						num2 != num3 &&
						num1 < num2 &&
						num2 < num3)
				{
					putchar(num1 + 48);
					putchar(num2 + 48);
					putchar(num3 + 48);

					if (num1 + num2 + num3 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				num3 = num3 + 1;
			}
			num2 = num2 + 1;
		}
		num1 = num1 + 1;
	}
	putchar('\n');
	return (0);
}



