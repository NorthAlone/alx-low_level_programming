#include "lists.h"

/**
 * add_node_end - t adds a new node
 * at the end of a list_t list.
 * @head: pointer to head pointer
 * @str: string to add;
 * Return: adress of new node or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *save = *head;
	size_t strLen = 0;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	while (str[strLen])
		strLen++;

	newNode->str = strdup(str);
	newNode->len = strLen;
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
