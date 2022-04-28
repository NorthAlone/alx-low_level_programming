#include "lists.h"

/**
 * insert_nodeint_at_index - insert a
 * new node at agiven position
 * @idx:index of the list
 * @n: data to add
 * Return: adress of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int size = 0;
	listint_t *idxAdress, *newNode;

	while (*head != NULL)
	{
		if (size == (idx - 1))
			idxAdress = (*head);
		(*head) = (*head)->next;
		size++;
	}

	if (idx == 0 || size == 0 || idx > size)
		return (NULL);
	newNode = (listint_t *)malloc(sizeof(listint_t));

	if (newNode ==  NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = idxAdress;

	idxAdress->next = newNode;

	return (newNode);

}
