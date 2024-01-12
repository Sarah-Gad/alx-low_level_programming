#include "lists.h"
/**
 * insert_dnodeint_at_index - a function that
 * inserts a new node at a given position.
 * @h: pointer tot he first node.
 * @idx: the index where the new will be placed.
 * @n: the data to be added into the new node.
 * Return: the address of the new node.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *moving, *moving2, *nw_nd;
	unsigned int post = 1;

	nw_nd = malloc(sizeof(dlistint_t));
	if (nw_nd == NULL)
		return (NULL);
	moving = *h;
	while (post < idx)
	{
		moving = moving->next;
		post++;
	}
	if (moving->next == NULL)
		return (NULL);
	nw_nd->n = n;
	moving2 = moving->next;
	nw_nd->prev = moving;
	moving->next = nw_nd;
	nw_nd->next = moving2;
	moving2->prev = nw_nd;
	return (nw_nd);
}
