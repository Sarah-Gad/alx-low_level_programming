#include "lists.h"
/**
 * pop_listint - a function that deletes the
 * head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: pointer to the head of the list.
 * Return: the head node's data.
*/
int pop_listint(listint_t **head)
{
	int head_n;
	listint_t *indx;

	if (*head == NULL)
		return (0);
	head_n = (*head)->n;
	indx = *head;
	indx = (*head)->next;
	free(*head);
	*head = indx;
	return (head_n);
}
