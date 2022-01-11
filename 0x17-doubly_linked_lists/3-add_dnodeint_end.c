#include "lists.h"
/**
* add_dnodeint_end - Adds a new node at the end of a dlistint_t list
* @head: Pointer to head of the list
* @n: New node data
* Return: Address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	temp = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	new->n = n;
	new->next = NULL;
	new->prev = temp;
	return (new);
}
