#include "lists.h"

/**
 * print_listint - prints all the elements of a
 * listint_t list.
 * @h: head
 * Return: print element and return number
 */

size_t print_listint(const listint_t *h)
{
	size_t nodenbr = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodenbr++;
		h = h->next;
	}

	return (nodenbr);
}
