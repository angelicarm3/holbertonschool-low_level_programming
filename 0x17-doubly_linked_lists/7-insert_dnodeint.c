#include "lists.h"
/**
* insert_dnodeint_at_index - Inserts a new node at a given position
* @h: Pointer to head of the list
* @idx: Index of the list
* @n: New node data
* Return: Address of the new element, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *temp = *h;
	unsigned int i = 0;

	if (!h)
	{
		return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (temp)
	{
		if (i == idx)
		{
			new->n = n;
			new->prev = temp->prev;
			new->next = temp;
			temp->prev->next = new;
			temp->prev = new;
			return (new);
		}
		temp = temp->next;
		i = i + 1;
	}
	if (i == idx)
	{
		return (add_dnodeint_end(h, n));
	}
	return (NULL);
}
