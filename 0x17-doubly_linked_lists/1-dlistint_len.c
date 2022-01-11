#include "lists.h"
/**
* dlistint_len - Returns the number of elements in a linked dlistint_t list
* @h: Head of the list
* Return: List length
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	int i = 0;

	while (h)
	{
		len += 1;
		h = h->next;
		i++;
	}
	return (len);
}
