#include "lists.h"

/**
 * sum_dlistint - sum of all data(n) of a dlistint_t linkedlist
 * @head: The head of the dlistint_t list
 *
 * Return: The sum of all the data, or (0) if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
