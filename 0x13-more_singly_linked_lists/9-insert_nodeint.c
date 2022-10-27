#include "lists.h"


/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of a list
 * @idx: index of the list where the new node is added
 * @n: integer to append to the list
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_val;
	listint_t *h;

	h = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && h != NULL; i++)
		{
			h = h->next;
		}
	}

	if (h == NULL && idx != 0)
		return (NULL);

	new_val = malloc(sizeof(listint_t));
	if (new_val == NULL)
		return (NULL);

	new_val->n = n;

	if (idx == 0)
	{
		new_val->next = *head;
		*head = new_val;
	}
	else
	{
		new_val->next = h->next;
		h->next = new_val;
	}

	return (new_val);
}
