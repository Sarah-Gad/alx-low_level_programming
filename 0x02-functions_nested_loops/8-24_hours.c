#include "main.h"
/**
 * jack_bauer - a function that prints every minute of
 * the day of Jack Bauer, starting from 00:00 to 23:59.
*/

void jack_bauer(void)
{
	int min;
	int hrs;

	hrs = 0;
	while (hrs <= 23)
	{
		min = 0;
		while (min <= 59)
		{
			_putchar((hrs / 10) + 48);
			_putchar((hrs % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');
		min = min + 1;
		}
	hrs = hrs + 1;
	}
}

