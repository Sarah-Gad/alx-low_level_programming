#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - a function that adds an element to the hash table.
 *
 * @ht: the hash table
 *
 * @key: the element's key
 *
 * @value: the element's value
 *
 * Return: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *val;
	hash_node_t *temp;
	ulong index;

	if (!(ht && key))
		return (0);
	val = value ? strdup(value) : NULL;
	if (!val && value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp)
	{
		if (!strcmp(temp->key, key))
		{
			free(temp->value);
			temp->value = val;
			return (1);
		}
		temp = temp->next;
	}
	temp = malloc(sizeof(hash_node_t));
	if (!temp)
	{
		free(val);
		return (0);
	}
	temp->key = strdup(key);
	if (!temp->key)
	{
		free(temp);
		free(val);
		return (0);
	}
	temp->value = val;
	temp->next = ht->array[index];
	ht->array[index] = temp;
	return (1);
}
