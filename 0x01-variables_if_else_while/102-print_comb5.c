#include <stdio.h>
/**
 * main - Enrty point of the program
 *
 * Description: this program ptints all
 * possible combinations of two two-digit numbers.
 *
 * Return: always 0 (Success)
*/
int main(void)
{
	int f_num;
	int s_num;

	f_num = 0;
	while (f_num < 100)
	{
		s_num = f_num;
		while (s_num < 100)
		{
			if (s_num != f_num)
			{
				putchar((f_num / 10) + 48);
				putchar((f_num % 10) + 48);
				putchar(' ');
				putchar((s_num / 10) + 48);
				putchar((s_num % 10) + 48);

				if (f_num != 98 || s_num != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			s_num = s_num + 1;
		}
		f_num = f_num + 1;
	}
	putchar('\n');
	return (0);
}
