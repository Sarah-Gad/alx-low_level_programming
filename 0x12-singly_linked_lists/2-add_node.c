#include "lists.h"
/**
 * add_node - a function that adds a new
 * node at the beginning of a list_t list.
 * @head: the first node in the list
 * @str: the string to be added to the nes node.
 * Return: pointer to the new node.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *nw_nd;
	char *cp_str;

	nw_nd = malloc(sizeof(list_t));
	if (nw_nd == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	cp_str = strdup(str);
	if (cp_str == NULL)
	{
		free(nw_nd);
		return (NULL);
	}
	nw_nd->str = cp_str;
	nw_nd->len = strlen(str);
	nw_nd->next = *head;
	*head = nw_nd;
	return (nw_nd);
}

