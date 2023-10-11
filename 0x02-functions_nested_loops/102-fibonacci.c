#include "main.h"
/**
 * main - Entry point
 *
 * Description: prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	unsigned long fi1 = 0, fi2 = 1, sum;
	float total_sum;

	while (1)
	{
		sum = fi1 + fi2;
		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			total_sum += sum;

		fi1 = fi2;
		fi2 = sum;
	}
	printf("%.0f\n", total_sum);

	return (0);
}
