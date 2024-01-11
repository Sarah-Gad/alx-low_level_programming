#include "lists.h"
/**
 * dlistint_len -  a function that returns the
 * number of elements in a linked dlistint_t list.
 * @h: the head pointer that points to the fist node
 * Return: the number of elements in the list.
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t nd_nm = 0;
	const dlistint_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		nd_nm++;
		ptr = ptr->next;
	}
	return (nd_nm);
}
