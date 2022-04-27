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
	listint_t *foundNode;
	listint_t *temp;
	size_t size = 0;
	temp = head;

	while (head != NULL)
	{
		size++;
		head = head->next;
	}

	index++;
	head = temp;

	if (size == 0 || index > size)
		return (NULL);

	while (index <= size)
	{
		foundNode = head;
		head = head->next;
		index++;
	}
	return (foundNode);
}
