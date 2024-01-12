#include "lists.h"
/**
 * add_dnodeint_end - a function that adds a new
 * node at the end of a dlistint_t list.
 * @head: pointer to the first node
 * @n: the data to be included in the new node.
 * Return: the address of the new element.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nw_nd;
	dlistint_t *moving;

	nw_nd = malloc(sizeof(dlistint_t));
	if (nw_nd == NULL)
		return (NULL);
	moving = *head;
	if (*head == NULL)
	{
		nw_nd->n = n;
		nw_nd->prev = NULL;
		nw_nd->next = NULL;
		*head = nw_nd;
		return (nw_nd);
	}
	nw_nd->n = n;
	nw_nd->next = NULL;
	while (moving->next != NULL)
	{
		moving = moving->next;
	}
	moving->next = nw_nd;
	nw_nd->prev = moving;
	return (nw_nd);
}
