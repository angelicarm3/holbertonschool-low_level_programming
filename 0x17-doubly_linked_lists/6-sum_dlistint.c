#include "lists.h"
/**
* sum_dlistint - Returns the sum of all the data of a linked list
* @head: Pointer to head of the list
* Return: Sum of all the data or 0 if list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
