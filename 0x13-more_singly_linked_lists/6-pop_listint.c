#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint list
 * @head: head of the listint list
 * Return: the head node
 */

int pop_listint(listint_t **head)
{
	int headnode;
	listint_t *h;
	listint_t *current;

	if (*head == NULL)
		return (0);

	current = *head;

	headnode = current->n;

	h = current->next;

	free(current);

	*head = h;

	return (headnode);
}
