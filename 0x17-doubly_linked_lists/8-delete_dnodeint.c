#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete node at index of a doubly linked list
 * @head: list header double pointer
 * @index: index position to remode linked list
 * Return: 1 for Success, -1 failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *next, *prev;
	unsigned int c;

	if (*head == NULL)
		return (-1);

	for (tmp = *head, c = 0, prev = NULL; tmp && c < index; c++)
	{
		prev = tmp;
		tmp = tmp->next;
	}

	if (tmp == NULL)
		return (-1);

	next = tmp->next;
	if (prev == NULL)
	{
		free(tmp);
		if (next != NULL)
		{
			next->prev = NULL;
			*head = next;
		}
		else
			*head = NULL;
	}
	else if (next == NULL)
	{
		prev->next = NULL;
		free(tmp);
	}
	else
	{
		prev->next = next;
		next->prev = prev;
		free(tmp);
	}

	return (1);
}
