#include "hash_tables.h"

/**
 * key_index - a func that that gives you the index of a key.
 *
 * @key: the key
 *
 * @size: the size of the hash table
 *
 * Return: the index in the hash table
 */
ulong key_index(const unsigned char *key, ulong size)
{
	ulong hash;

	hash = hash_djb2(key);
	return (hash % size);
}
