#include "main.h"
/**
 * _strstr - a function
 * that locates a substring.
 *
 * @haystack: the string to search in
 * @needle: the srting to search for
 *
 * Return: a pointer or null.
*/

char *_strstr(char *haystack, char *needle)
{
	int a;
	int b;

	for (a = 0; needle[a] != '\0'; a++)
	{
		for (b = 0; haystack[b] != '\0'; b++)
		{
			if (needle[a] == haystack[b])
			{
				return (haystack + b);
			}
		}
	}
	return ('\0');
}
