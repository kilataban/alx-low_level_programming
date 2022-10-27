#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t list
 * @head: head of a listint_t list
 * @index: index of the node
 * Return: If NODE doesn't exist, Return (0) else Return head
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	for (a = 0; a < index && head != NULL; a++)
	{
		head = head->next;
	}

	return (head);
}
