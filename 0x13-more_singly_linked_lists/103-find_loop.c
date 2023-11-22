#include "lists.h"
#define node listint_t

/**
 * find_listint_loop - finds a loop in a linked list
 *
 * @head: head of the list
 *
 * Return: the address of the node where the loop starts, or NULL
 *	if there is no loop
*/
node *find_listint_loop(node *head)
{
	node *ptr_t, *ptr_h;

	ptr_t = ptr_h = head;

	while (ptr_h && ptr_h->next)
	{
		ptr_t = ptr_t->next;
		ptr_h = ptr_h->next->next;

		if (ptr_h == ptr_t)
		{
			ptr_h = head;

			while (ptr_h != ptr_t)
			{
				ptr_h = ptr_h->next;
				ptr_t = ptr_t->next;
			}
			return (ptr_t);
		}
	}
	return (NULL);
}
