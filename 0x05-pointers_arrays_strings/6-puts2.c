#include "main.h"
/**
 * puts2 - a function that prints
 * every other character of a string,
 * starting with the first character,
 * followed by a new line.
 *
 * @str: pointer to the string
*/

void puts2(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; ++count)
	{
		if (count % 2 == 0)
		{
			_putchar(str[count]);
		}
	}
	_putchar('\n');
}
