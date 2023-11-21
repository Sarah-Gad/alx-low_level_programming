#include "lists.h"
/**
 * delete_nodeint_at_index - a function that deletes the
 * node at index index of a listint_t linked list.
 * @head: pointer to the head of the list.
 * @index: the index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *stop, *start;
	unsigned int tracking = 0;

	if (*head != NULL)
	{
		if (index == 0)
		{
			stop = *head;
			*head = stop->next;
			free(stop);
			return (1);
		}
		stop = *head;
		start = *head;
		while (tracking < index - 1)
		{
			stop = stop->next;
			if (stop == NULL)
				return (-1);
			start = start->next;
			tracking++;
		}
		stop = stop->next;
		start->next = stop->next;
		free(stop);
		return (1);
	}
	else
		return (-1);
}
