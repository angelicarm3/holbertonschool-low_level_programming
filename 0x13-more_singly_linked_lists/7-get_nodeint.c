#include "lists.h"

/**
* get_nodeint_at_index - Returns the nth node of a listint_t linked list
*
* @head: pointer to the head of the list
* @index: index of the nth node
*
* Return: The nth node of a listint_t list
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (temp)
	{
		if (i == index)
		{
			return (temp);
		}
		i++;
		temp = temp->next;
	}

	return (NULL);
}
