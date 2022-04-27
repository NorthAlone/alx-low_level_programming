#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth
 * node of a listint_t
 * @head: pointer to head
 * @index: index of node
 * Return: index of the node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0
	listint_t *save = head;

	while (save && i < index)
	{
		save = save->next;
		i++;
	}
	return (save ? save : NULL);
}
