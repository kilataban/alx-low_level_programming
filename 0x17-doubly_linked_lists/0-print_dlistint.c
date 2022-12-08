#include "lists.h"

/**
* print_dlistint - prints all the elements of a dlistint_t list
* @h: the head of the dlistint_t list
*
* Return: number of node
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t list_nodes = 0;

	while (h)
	{
		list_nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (list_nodes);
}
