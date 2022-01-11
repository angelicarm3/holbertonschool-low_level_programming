#include "lists.h"
/**
* delete_dnodeint_at_index - Deletes the node at index of a linked list
* @head: Pointer to the head of the list
* @index: Index of the list
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *delete;
	unsigned int i = 0;

	if (!head || !*head)
	{
		return (-1);
	}
	if (index == 0 && temp->next != NULL)
	{
		delete = temp;
		temp->next->prev = NULL;
		*head = temp->next;
		free(delete);
		return (1);
	}
	else if (index == 0)
	{
		free(*head);
		return (1);
	}
	while (temp->next)
	{
		if (i == index)
		{
			delete = temp;
			temp->next->prev = temp->prev;
			temp->prev->next = temp->next;
		}
		temp = temp->next;
		i = i + 1;
	}
	if (i == index)
	{
		temp->prev->next = NULL;
		delete = temp;
	}
	if (index > i)
		return (-1);
	free(delete);
	return (1);
}
