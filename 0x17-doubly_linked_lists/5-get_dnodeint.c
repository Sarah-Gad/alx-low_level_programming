#include "lists.h"
/**
 * get_dnodeint_at_index - a function that returns
 * the nth node of a dlistint_t linked list.
 * @head: head pointer that points to the first node
 * @index: the index of the node
 * Return: the nth node of a dlistint_t linked list.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *moving;
	unsigned int post = 0;

	moving = head;
	while (post < index)
	{
		if (moving->next == NULL)
			return (NULL);
		moving = moving->next;
		post++;
	}
	return (moving);
}
