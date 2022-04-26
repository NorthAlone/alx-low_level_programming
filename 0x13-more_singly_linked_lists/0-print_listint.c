#include "lists.h"

/**
 * print_listint - print all the elements of listint_t
 * @h: head pointer
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int nodeNumber = 0;

	while (h != NULL)
	{
		nodeNumber++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodeNumber);
}
