#include "lists.h"

/**
 * list_len - eturns the number
 * of elements in a linked list_t list
 * @h: pointer to list_t list
 * Return: number of element of list_t
 */

size_t list_len(const list_t *h)
{
	size_t nbrElement = 0;

	while (h != NULL)
	{
		nbrElement++;
		h = h->next;
	}
	return (nbrElement);
}
