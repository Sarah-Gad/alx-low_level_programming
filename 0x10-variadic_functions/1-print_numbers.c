#include "variadic_functions.h"
/**
 * print_numbers - a function that
 * prints numbers, followed by a new line.
 * @separator: he string to be printed between numbers
 * @n: the number of integers
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int indx;
	va_list n_pt;

	va_start(n_pt, n);
	for (indx = 0; indx < n; indx++)
	{
		printf("%d", va_arg(n_pt, int));
		if (separator != NULL && indx != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(n_pt);
}
