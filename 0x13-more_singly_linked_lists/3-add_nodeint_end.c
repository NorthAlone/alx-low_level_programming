#include "lists.h"

/**
 * add_nodeint_end - t adds a new node
 * at the end of a list_t list.
 * @head: pointer to head pointer
 * @n: number to add;
 * Return: adress of new node or NULL
 */

list_t *add_nodeint_end(list_t **head, const int n)
{
	list_t *newNode;
	list_t *save = *head;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	while (str[strLen])
		strLen++;

	newNode->n = n;
	newNode->next = NULL;

	if ((*head) == NULL)
	{
		(*head) = newNode;
		return (newNode);
	}

	while (save->next)
		save = save->next;

	save->next = newNode;

	return (newNode);
}
