#include "lists.h"

/**
* pop_listint - Deletes the head node of a listint_t list
*
* @head: pointer to the head of the list
*
* Return: Head node's data or 0 if list is empty
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n = 0;

	if (*head != NULL)
	{
		temp = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = temp;
	}

	else
	{
		return (0);
	}

	return (n);
}
