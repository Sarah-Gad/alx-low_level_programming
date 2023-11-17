#include "lists.h"
/**
 * list_len - a function that returns the number of
 * elements in a linked list_t list.
 * @h: the first node in the list
 * Return: num of elements.
*/
size_t list_len(const list_t *h)
{
	size_t num;

	num = 0;
	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
