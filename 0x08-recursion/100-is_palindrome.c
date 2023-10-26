#include "main.h"
/**
 * last - get the last index.
 *
 * @s: pointer to the string
 *
 * Return: int
*/

int is_palindrome(char *s);
int check(char *s, int start, int end, int mod);
int last(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += last(s + 1) + 1;
	return (n);
}

/**
 * is_palindrome -  a function that
 * returns 1 if a string is a
 * palindrome and 0 if not.
 *
 * @s: the string
 *
 * Return: zero or one.
*/

int is_palindrome(char *s)
{
	int end = last(s);

	return (check(s, 0, end - 1, end % 2));
}

/**
 * check - the checker
 *
 * @s: the string
 * @start: moves form right to left
 * @end: moved from left to right
 *
 * Return: zero or one
*/

int check(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, mod));
}
