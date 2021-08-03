#include "lists.h"

/**
* add_nodeint_end - Adds a new node at the end of a listint_t list
*
* @head: pointer to the head of the list
* @n: Node to be added
*
* Return: Address of the new element or NULL if failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *temp = *head;

	if (head == NULL)
	{
		return (NULL);
	}

	while (temp != NULL && temp->next != NULL)
	{
		temp = temp->next;
	}

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->next = NULL;

	if (temp != NULL)
	{
		temp->next = node;
	}
	else
	{
		*head = node;
	}

	return (node);
}
