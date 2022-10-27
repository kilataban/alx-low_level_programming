#include "lists.h"

/**
 * sum_listint - returns the sum of all  data (n) of a listint_t list
 * @head: a pointer to the head of the listint_t list
 * Return: If the list is empty - 0, else all the head data
 */

int sum_listint(listint_t *head)
{
	int total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
