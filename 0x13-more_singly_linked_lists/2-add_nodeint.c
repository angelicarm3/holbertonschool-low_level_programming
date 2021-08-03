#include "lists.h"

/**
* add_nodeint - Adds a new node at the beginning of a listint_t list
*
* @head: a pointer to the first element
* @n: node to add
*
* Return: Address of the new element or NULL if failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	if (head == NULL)
	{
		return (NULL);
	}

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
