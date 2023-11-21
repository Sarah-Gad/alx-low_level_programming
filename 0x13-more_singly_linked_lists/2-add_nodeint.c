#include "lists.h"
/**
 * add_nodeint - a function that adds a new
 * node at the beginning of a listint_t list.
 * @head: pointer to the head of the linked list.
 * @n:  the value to be added to the new node.
 * Return: address of the new node.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw_nd;

	nw_nd = malloc(sizeof(listint_t));
	if (nw_nd == NULL)
		return (NULL);
	nw_nd->n = n;
	nw_nd->next = *head;
	*head = nw_nd;
	return (nw_nd);
}
