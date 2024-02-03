#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - a function that retrieves a value associated with a key.
 *
 * @ht: the hash table
 *
 * @key: the key
 *
 * Return: the value associated with th key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	ulong index;
	hash_node_t *temp;

	if (!(ht && key))
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp)
	{
		if (!strcmp(temp->key, key))
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
