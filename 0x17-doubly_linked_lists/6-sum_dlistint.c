#include "lists.h"
/**
 * sum_dlistint - a function that returns the sum
 * of all the data (n) of a dlistint_t linked list.
 * @head: head pointer that points to the first node.
 * Return: sum of all data in every node.
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *moving;
	int tot = 0;

	moving = head;
	if (head == NULL)
		return (0);
	while (moving != NULL)
	{
		tot += moving->n;
		moving = moving->next;
	}
	return (tot);
}
