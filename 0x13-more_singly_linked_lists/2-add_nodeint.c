#include "lists.h"

/**
 * add_nodeint - add node at beginning of list
 * @head: pointer to head pointer
 * @n: int to add to list
 * Return: pointer or NULL is fail
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = (*head);
	(*head) = newNode;
	return (newNode);

}
