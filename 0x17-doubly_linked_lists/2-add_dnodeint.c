#include "lists.h"

/**
* add_dnodeint - adds new node to the beginning of dlistint_t list
* @head: double pointer to the head node of the list
* @n: new element
*
* Return: address of the new element, or NULL if failed
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_node;

	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (NULL);
	n_node->n = n;
	n_node->prev = NULL;
	n_node->next = *head;
	if (*head != NULL)
		(*head)->prev = n_node;
	*head = n_node;

	return (n_node);
}

