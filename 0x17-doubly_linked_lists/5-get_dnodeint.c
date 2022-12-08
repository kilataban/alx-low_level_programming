#include "lists.h"

/**
 * get_dnodeint_at_index - find and return the nth node of a dlistint_t
 * @head: The head of the dlistint_t list
 * @index: node to be found
 *
 * Return: Address of node or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
