#include "main.h"
/**
 * rev_string - a function that reverses a string.
 *
 *@s: the pointer to the string
*/

void rev_string(char *s)
{
	int c;
	int l;
	char temp;

	for (c = 0; s[c] != '\0'; ++c)
	{
		;
	}
	for (l = 0; l < c / 2; l++)
	{
		temp = s[l];
		s[l] = s[c - 1 - l];
		s[c - 1 - l] = temp;
	}
}
