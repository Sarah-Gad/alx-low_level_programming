#include "variadic_functions.h"
/**
 * print_strings - a function that
 * prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int indx;
	unsigned int ind;
	va_list s_pt;
	char **arr_pt = malloc(n * sizeof(char*));

	if (arr_pt == NULL)
	{
		exit(EXIT_FAILURE);
	}
	
	va_start(s_pt, n);
	for (ind = 0; ind < n; ind++)
	{
		arr_pt[ind] = va_arg(s_pt, char*);
	}
	for(indx = 0; indx < n; indx++)
	{
		printf("%s", arr_pt[indx] != NULL ? arr_pt[indx] : "(nil)");
		if (separator != NULL && indx != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	free(arr_pt);
}
