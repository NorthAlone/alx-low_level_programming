#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: pointer to head of list
 */

void free_list(list_t *head)
{
	list_t *save;

	while (head)
	{
		save = head->next;
		free(head->str);
		free(head);
		head = save;
	}
}
