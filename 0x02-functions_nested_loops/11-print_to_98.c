#include "main.h"
/**
 * print_to_98 - a function that prints all natural
 * numbers from n to 98, followed by a new line.
 *
 * @n: the input
*/

void print_to_98(int n)
{
	int n_num;

	if (n > 98)
		for (n_num = n; n_num > 98; n_num--)
			printf("%d, ", n_num);
	else
		for (n_num = n; n_num < 98; n_num++)
			printf("%d, ", n_num);
	printf("98\n");
}
