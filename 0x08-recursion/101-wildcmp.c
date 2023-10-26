#include "main.h"
/**
 * past_s - iterates past *
 *
 * @s2: second string
 *
 * Return: pointer after *
*/

char *past_s(char *s2)
{
	if (*s2 == '*')
		return (past_s(s2 + 1));
	else
		return (s2);
}

/**
 * incep - a helper func
 *
 * @s1: first string
 * @s2: secong string
 *
 * Return: 1 or 0
*/

int incep(char *s1, char *s2)
{
	int ret = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		ret += wildcmp(s1 + 1, s2 + 1);
	ret += incep(s1 + 1, s2);
	return (ret);
}

/**
 * wildcmp - compares two strings
 * and returns 1 if the strings can
 * be considered identical, otherwise return 0.
 *
 * @s1: first string
 * @s2: seconf string
 *
 * Return: 0 or 1
*/

int wildcmp(char *s1, char *s2)
{
	int ret = 0;

	if (!*s1 && *s2 == '*' && !*past_s(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = past_s(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			ret += wildcmp(s1 + 1, s2 + 1);
		ret += incep(s1, s2);
		return (!!ret);
	}
	return (0);
}
