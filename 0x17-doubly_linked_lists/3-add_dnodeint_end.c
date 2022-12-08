#include "lists.h"

/**
* add_dnodeint_end - Adds a new node at the end of a dlistint_t list
* @head: head node of dlistint_t list
* @n: new node
*
* Return: Address of the new element or NULL if it failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *n_node, *l_node;

	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;

	if (*head == NULL)
	{
		n_node->prev = NULL;
		*head = n_node;
		return (n_node);
	}

	l_node = *head;
	while (l_node->next != NULL)
		l_node = l_node->next;
	l_node->next = n_node;
	n_node->prev = l_node;

	return (n_node);
}
