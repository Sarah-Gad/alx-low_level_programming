#include "main.h"
#include <stddef.h>
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
	int h, n;
	int temp;

	for (h = 0; haystack[h] != 0; h++)
	{
		temp = h;
		for  (n = 0; (needle[n] == haystack[temp]) && (needle[n] != '\0'); n++)
		{
			temp++;
		}
		if (needle[n] == '\0')
			return (haystack + h);
	}
	return (NULL);
}
