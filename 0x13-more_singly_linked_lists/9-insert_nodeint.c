#include "lists.h"
/**
 * insert_nodeint_at_index - a function that
 * inserts a new node at a given position.
 * @head: pointer to the head of the list.
 * @idx: the index where the new list should be added.
 * @n: the value to be added to the new node.
 * Return: pointer to the new node.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nw_nd;
	listint_t *start, *end;
	unsigned int tracking = 0;

	if (*head != NULL)
	{
		nw_nd = malloc(sizeof(listint_t));
		if (nw_nd == NULL)
			return (NULL);
		nw_nd->n = n;
		start = *head;
		end = *head;
		while (tracking < idx - 1)
		{
			start = start->next;
			if (start == NULL)
			{
				free(nw_nd);
				return (NULL);
			}
			tracking++;
			end = end->next;
		}
		end = end->next;
		start->next = nw_nd;
		nw_nd->next = end;
	return (nw_nd);
	}
	else if (*head == NULL || idx == 0)
	{
		nw_nd = malloc(sizeof(listint_t));
		if (nw_nd == NULL)
			return (NULL);
		nw_nd->n = n;
		nw_nd->next = *head;
		*head = nw_nd;
	return (nw_nd);
	}
	return (NULL);
}
