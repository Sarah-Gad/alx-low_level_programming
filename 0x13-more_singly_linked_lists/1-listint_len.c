#include "lists.h"
/**
 * listint_len - a function that returns the
 * number of elements in a linked listint_t list.
 * @h: pointer ti the fist node
 * Return: the number of elements in the list.
*/
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
