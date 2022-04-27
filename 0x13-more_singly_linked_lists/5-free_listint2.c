#include "lists.h"

/**
 * free_listint2 - free a listint_t list
 * @head: head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *save;

	if (head == NULL)
		return;

	while (*head)
	{
		save = (*head)->next;
		free(*head);
		(*head) = save;
	}

	*head = NULL;
}
