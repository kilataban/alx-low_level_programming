#include "lists.h"

/**
 * list_len - returns then number of elements in a linked list_t list
 * @h: singly linked list
 * Return: linked list number of elemnts
 */

size_t list_len(const list_t *h)
{
	size_t j;

	j  = 0;
	while (h != NULL)
	{
		h = h->next;
		j++;
	}
	return (j);
}
