#include "lists.h"
/**
 * get_nodeint_at_index -  a function that returns
 * the nth node of a listint_t linked list.
 * @head: pointer to the first node.
 * @index: the index of the node.
 * Return: pointer to the target node.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tg_ptr;
	unsigned int tracking;

	if (head == NULL)
		return (NULL);
	tracking = 0;
	tg_ptr = head;
	while (tracking < index)
	{
		tg_ptr = tg_ptr->next;
		if (tg_ptr == NULL)
		{
			return (NULL);
		}
		tracking++;
	}
	return (tg_ptr);
}
