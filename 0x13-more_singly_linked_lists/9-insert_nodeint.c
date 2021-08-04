#include "lists.h"

/**
* insert_nodeint_at_index - Inserts a new node at a given position
* @head: Pointer to the head of the list
* @idx: The position to add new node
* @n: Value of the node
* Return: Address of the new node or NULL if failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	listint_t *tail;
	unsigned int counter = 0;

	tail = *head;
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;

	if (*head == NULL)
	{
		*head = node;
		node->next = NULL;
		return (node);
	}
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	while (counter < (idx - 1) && tail->next)
	{
		tail = tail->next;
		counter++;
	}
	if (counter < idx - 1)
		return (NULL);
	node->next = tail->next;
	tail->next = node;
	return (node);
}
