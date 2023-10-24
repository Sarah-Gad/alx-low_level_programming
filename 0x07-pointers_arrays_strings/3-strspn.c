#include "main.h"
/**
 * _strspn - a function that gets
 * the length of a prefix substring.
 *
 * @s: the first string
 * @accept: the second string.
 *
 * Return: a
*/

unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != s[a]; b++)
		{
			if (accept[b] == '\0')
				return (a);
		}
	}
	return (a);
}
