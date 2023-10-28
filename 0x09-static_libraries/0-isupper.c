#include "main.h"
/**
 * _isupper - a function that
 * checks for uppercase character.
 *
 * @chr: input
 *
 * Return: 1 if c is uppercase,
 * 0 otherwise
*/

int _isupper(int chr)
{

	if (chr >= 65 && chr <= 90)
	{
		return (1);
	}
	else if (chr >= 97 && chr <= 122)
	{
		return (0);
	}
	else
	{
		return (0);
	}
}
