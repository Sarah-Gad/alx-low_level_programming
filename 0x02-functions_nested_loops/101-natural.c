#include "main.h"
/**
 * main - Entry point
 *
 * Description: computes and prints
 * the sum of all the multiples
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int num1;
	int num2;

	for (num2 = 0; num2 < 1024; num2++)
	{
		if ((num2 % 3 == 0) || (num2 % 5 == 0))
			num1 += num2;
	}
	printf("%d\n", num1);

	return (0);
}
