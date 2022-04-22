#include "lists.h"

/**
 * *add_node - adds a new node at the beginning
 * of a list_t list.
 * @str: string to add
 * @head: pointer to head pointer
 * Return: pointer to new added node or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t strLen = 0;
	list_t *newNode = malloc(sizeof(list_t));

	while (str[strLen])
		strLen++;

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	if (newNode->str == NULL)
		return (NULL);

	newNode->len = strLen;
	newNode->next = (*head);
	(*head) = newNode;
	return (newNode);

}
