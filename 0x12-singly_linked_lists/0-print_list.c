#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: a singly linked list
 * Return: list number of elements
 */

size_t print_list(const list_t *h)
{
	size_t l;

	l  = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		l++;
	}
	return (l);
}
