#include "lists.h"

/**
* free_dlistint - frees a dlistint_t list
* @head: pointer to the head of the list
*
* Return: Nothing, type void function
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *rem_val;

	while (head)
	{
		rem_val = head->next;
		free(head);
		head = rem_val;
	}
}
