#include "function_pointers.h"
/**
 * print_name - a function that prints a name.
 * @name: pointer to a string
 * @f: pointer to function.
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
