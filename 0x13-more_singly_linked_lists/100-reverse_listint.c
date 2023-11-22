#include "lists.h"
/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: pointer to the head of the list.
 * Return: pointer to the first node.
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *curr;

	prev = NULL;
	curr = *head;
	while (curr != NULL)
	{
		*head = curr->next;
		curr->next = prev;
		prev = curr;
		curr = *head;
	}
	*head = prev;
	return (*head);
}
