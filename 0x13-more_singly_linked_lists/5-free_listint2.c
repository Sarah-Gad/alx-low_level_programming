#include "lists.h"
/**
 * free_listint2 -  a function that frees a listint_t list.
 * @head: pointer to the head of the list.
*/
void free_listint2(listint_t **head)
{
	listint_t *holder;

	if (head != NULL)
	{

		holder = *head;
		while (*head != NULL)
		{
			holder = (*head)->next;
			free(*head);
			*head = holder;
		}
		*head = NULL;
	}
}
