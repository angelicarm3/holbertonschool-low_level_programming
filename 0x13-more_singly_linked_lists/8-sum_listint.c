#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data of a listint_t list
 * @head: Pointer to the head of the list
 * Return: Result of the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
