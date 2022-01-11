#include "lists.h"
/**
* get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
* @head: Pointer to head of the list
* @index: Index of the list
* Return: Address of the node, or NULL if it does´t exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		if (i == index)
		{
			return (temp);
		}
		temp = temp->next;
		++i;
	}
	return (NULL);
}
