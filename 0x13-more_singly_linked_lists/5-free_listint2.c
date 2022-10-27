#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head of a listint_t list
 * Return: No value to return because type is void
 */

void free_listint2(listint_t **head)
{
	listint_t *node;
	listint_t *pres;

	if (head != NULL)
	{
		pres = *head;
		while ((node = pres) != NULL)
		{
			pres = pres->next;
			free(node);
		}
		*head = NULL;
	}
}
