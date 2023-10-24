#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 *
 * @s: the string.
 * @c: the character to locate.
 *
 * Return: f
*/

char *_strchr(char *s, char c)
{
	char *f = NULL;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			f = &s[i];
			break;
		}
	}
	return (f);
}
