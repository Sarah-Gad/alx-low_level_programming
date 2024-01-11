#include "lists.h"
/**
 * add_dnodeint - a function that adds a
 * new node at the beginning of a dlistint_t list.
 * @head: pointer to the first node
 * @n: the data to be included in the new node.
 * Return: the address of the new element.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;

	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->prev = NULL;
	ptr->next = *head;
	if (*head != NULL)
		(*head)->prev = ptr;
	*head = ptr;
	return (*head);
}
