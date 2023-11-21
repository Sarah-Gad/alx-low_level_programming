#include "lists.h"
/**
 * add_nodeint_end - a function that adds
 * a new node at the end of a listint_t list.
 * @head: pointer to the head of the list.
 * @n: the valuse to be added in the new node.
 * Return: the addess of the new node.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw_nd;
	listint_t *indx;

	nw_nd = malloc(sizeof(listint_t));
	if (nw_nd == NULL)
		return (NULL);
	nw_nd->n = n;
	nw_nd->next = NULL;
	if (*head == NULL)
		*head = nw_nd;
	else
	{
		indx = *head;
		while (indx->next != NULL)
		{
			indx = indx->next;
		}
		indx->next = nw_nd;
	}
	return (nw_nd);
}
