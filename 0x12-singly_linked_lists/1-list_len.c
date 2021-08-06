#include "lists.h"

/**
* list_len - Returns the number of elements in a linked listint_t list
*
* @h: Pointer to the head of the list
*
* Return: number of nodes
*/
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
