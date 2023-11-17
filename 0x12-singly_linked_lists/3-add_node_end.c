#include "lists.h"
/**
 * add_node_end - a function that adds a
 * new node at the end of a list_t list.
 * @head: the fist node in the list
 * @str: the string to be added ti the new node.
 * Return: pointer ti the new node.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nw_nd;
	list_t *ind_ptr;

	if (str == NULL)
		return (NULL);
	nw_nd = (list_t *)malloc(sizeof(list_t));
	if (nw_nd == NULL)
		return (NULL);
	nw_nd->str = strdup(str);
	nw_nd->len = strlen(str);
	nw_nd->next = NULL;
	if (*head == NULL)
		*head = nw_nd;
	else
	{
		ind_ptr = *head;
		while (ind_ptr->next != NULL)
		{
			ind_ptr = ind_ptr->next;
		}
		ind_ptr->next = nw_nd;
	}
	return (nw_nd);
}
		
