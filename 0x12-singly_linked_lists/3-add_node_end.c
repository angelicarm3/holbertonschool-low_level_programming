#include "lists.h"

/**
* add_node_end - Adds a new node at the end of a list_t list
*
* @head: pointer to the head of the list
* @str: String to be duplicaded
*
* Return: Address of the new element or NULL if failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *node;
	list_t *temp;

	if (str == NULL)
	{
		return (NULL);
	}
	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->str = strdup(str);
	while (str[i] != '\0')
		i++;
	node->len = i;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = node;
	return (node);
}
