#include "lists.h"
/**
 * free_listint - a function that frees a listint_t list.
 * @head: pointer to the fist node.
*/
void free_listint(listint_t *head)
{
	listint_t *holder;

	holder = head;
	while (head != NULL)
	{
		holder = head->next;
		free(head);
		head = holder;
	}
}
