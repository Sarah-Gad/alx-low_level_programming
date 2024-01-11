#include "lists.h"
/**
 * print_dlistint - a function that prints
 * all the elements of a dlistint_t list.
 * @h: the head pointer that points to the first node.
 * Return: the number of nodes printed.
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t prtd_nds = 0;
	const dlistint_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		printf("%d", ptr->n);
		printf("\n");
		ptr = ptr->next;
		prtd_nds++;
	}
	return (prtd_nds);
}
