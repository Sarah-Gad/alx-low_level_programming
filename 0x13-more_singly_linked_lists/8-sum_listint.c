#include "lists.h"
/**
 * sum_listint - a function that returns the
 * sum of all the data (n) of a listint_t linked list.
 * @head: pointer to the first node.
 * Return: the sum of all the data.
*/
int sum_listint(listint_t *head)
{
	int tot;

	tot = 0;
	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		tot += head->n;
		head = head->next;
	}
	return (tot);
}
