#include <string.h>
#include "main.h"

/**
 * is_palindrome - a function that returns 1 if a string
 * is a palindrome and 0 if not
 * @s: pointer indicates to the string
 * Return: one or zero
*/

int is_palindrome(char *s)
{
	if (s == NULL || *s == '\0' || *(s + 1) == '\0')
	{
		return (1);
	}
	else if (*s != *(s + strlen(s) - 1))
	{
		return (0);
	}
	else
	{
		*(s + strlen(s) - 1) = '\0';
		return (is_palindrome(s + 1));
	}
}
