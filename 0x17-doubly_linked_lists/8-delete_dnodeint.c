#include "lists.h"
/**
 * delete_dnodeint_at_index - a function that deletes the node
 * at index index of a dlistint_t linked list.
 * @head:pointer tot he first node
 * @index: the index of the node to be deleted.
 * Return: 1 or -1.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *moving, *moving2;
	unsigned int post = 1;

	if (*head == NULL)
		return (-1);
	moving = *head;
	if (index == 0)
	{
		*head = moving->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(moving);
		return (1);
	}
	while (post < index && moving->next != NULL)
	{
		moving = moving->next;
		post++;
	}
	if (moving->next == NULL)
		return (-1);
	moving2 = moving->next->next;
	free(moving->next);
	moving->next = moving2;
	if (moving2 != NULL)
		moving2->prev = moving;
	return (1);
}
