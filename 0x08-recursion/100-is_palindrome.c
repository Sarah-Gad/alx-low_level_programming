#include "main.h"
int str_r(char *s);
int hlp(char *strt, char *end);

/**
 * is_hlpndrome - a function that returns 1
 * if a string is a hlpndrome and 0 if not.
 *
 * @s: '*s' is a pointer
 *
 * Return: Always 0.
*/

int is_hlpndrome(char *s)
{
	int length;

	char *end = s;
	int i;

	length = str_r(s);
	i = hlp(s, end + (length - 1));
	return (i);
}

/**
 * hlp - a helper func
 *
 * @strt: '*strt' is a pointer
 * @end: '*end' is a pointer
 *
 * Return: Always 0.
*/

int hlp(char *strt, char *end)
{
	int i;

	if (strt >= end)
		return (1);
	if (*strt != *end)
		return (0);
	if
	{
		i = hlp(strt + 1, end - 1);
		return (i);
	}
}

/**
 * str_r - another helper func
 *
 * @s: '*s' is a pointer
 *
 * Return: Always 0.
*/

int str_r(char *s)
{
	int i;

	if (*s != '\0')
	{
		i = str_r(s + 1);
		i++;
		return (i);
	}
	else
	{
		i = 0;
		return (i);
	}
}
