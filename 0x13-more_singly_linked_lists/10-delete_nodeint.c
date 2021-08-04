#include "lists.h"

/**
* delete_nodeint_at_index - Deletes the node at index of a listint_t list
*
* @head: The head node of the list
* @index: Position of the note to be deleted
*
* Return: 1 if succeeded -1 if failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *point = *head;
	listint_t *next;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = point->next;
		free(point);
		return (1);
	}
	while (point->next && i < index - 1)
	{
		point = point->next;
		i++;
	}

	if (point == NULL || point->next == NULL)
	return (-1);

	next = point->next->next;
	free(point->next);
	point->next = next;
	return (1);
}
