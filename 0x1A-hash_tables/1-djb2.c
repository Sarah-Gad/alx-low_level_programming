#include "hash_tables.h"

/**
 * hash_djb2 - a function that makes a hash code out of a string.
 *
 * @str: the string that represents a key.
 *
 * Return: the hash code.
 */
ulong hash_djb2(const unsigned char *str)
{
	ulong hash;
	int c;

	hash = 5381;
	for (c = *str++; c; c = *str++)
		hash = ((hash << 5) + hash) + c;
	return (hash);
}
