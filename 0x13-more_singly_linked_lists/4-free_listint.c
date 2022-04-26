#include "lists.h"

/**
 * free_listint - free a listint_t list
 * @head: head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *save;

	while (head)
	{
		save = head->next;
		free(head);
		head = temp;
	}
}
