#include "lists.h"
/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: head pointer that points to the first node.
 * Return: nothing.
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *keepit;
	keepit = head;
	while (head->next != NULL)
	{
		head = head->next;
		free(keepit);
		keepit = head;
	}
	head = NULL;
	keepit = NULL;
}	
