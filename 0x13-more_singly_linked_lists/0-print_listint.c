#include "lists.h"

/**
 * print_listint - print all elements of a listint_t list
 * @h: pointer to head of listint_t list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (node);
}
