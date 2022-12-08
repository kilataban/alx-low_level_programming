#include "lists.h"

/**
* dlistint_len - Counts the number of elements in a linked dlistint_t list.
* @h: head node of dlistint_t list
*
* Return: Number of elements in the dlistint_t that is linked
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t list_nodes = 0;

	while (h)
	{
		list_nodes++;
		h = h->next;
	}

	return (list_nodes);
}
