#include "lists.h"

/**
* add_node - Adds a new node at the beginning of a listint_t list
*
* @head: a pointer to the first element
* @str: String to be added
*
* Return: Address of the new element or NULL if failed
*/
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}
	node->str = strdup(str);
	node->len = i;
	node->next = (*head);
	(*head) = node;

	return (*head);
}
