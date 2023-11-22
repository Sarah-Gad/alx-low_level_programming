#include "lists.h"
#include <stdio.h>

/**
 * looped_listint_len - Counts the number of unique nodes in a looped
 * listint_t linked list.
 * @head: A pointer to the head of the list to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
*/
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t unique_nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slow = head->next;
	fast = (head->next)->next;

	while (fast)
	{
		if (slow == fast)
		{
			slow = head;

			while (slow != fast)
			{
				unique_nodes++;
				slow = slow->next;
				fast = fast->next;
			}

			slow = slow->next;

			while (slow != fast)
			{
				unique_nodes++;
				slow = slow->next;
			}

			return (unique_nodes);
		}

		slow = slow->next;
		fast = (fast->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t num_nodes, index = 0;

	num_nodes = looped_listint_len(head);

	if (num_nodes == 0)
	{
		for (; head != NULL; num_nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < num_nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (num_nodes);
}
