#include "main.h"
/**
 * _isalpha - a function that checks for alphabetic character.
 *
 * @c: checks the input of the function
 *
 * Return: returns 1 if 'c' is lowercase
 * otherwise always 0 (success)
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
