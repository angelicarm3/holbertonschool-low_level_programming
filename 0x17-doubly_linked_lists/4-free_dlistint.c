#include "lists.h"

/**
* free_dlistint - Frees a dlistint_t list
* @head: Head of dlist
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *first, *tmp;

	first = head;
	while (first != NULL)
	{
		tmp = first->next;
		free(first);
		first = tmp;
	}
}
