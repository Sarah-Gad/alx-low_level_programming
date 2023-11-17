#include "lists.h"
/**
 * free_list - a function that frees a list_t list.
 * @head: the fisrt node of the list to be freed.
*/
void free_list(list_t *head)
{
	list_t *c_ptr;
	list_t *n_ptr;

	c_ptr = head;
	while (c_ptr != NULL)
	{
		n_ptr = c_ptr->next;
		free(c_ptr->str);
		free(c_ptr);
		c_ptr = n_ptr;
	}
}
