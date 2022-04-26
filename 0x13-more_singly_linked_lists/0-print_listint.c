#include "lists.h"

/**
 * print_listint - print all the elements of listint_t
 * @h: head pointer
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodeNumber = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodeNumber++;
	}
	return (nodeNumber);
}
