#include "lists.h"

/**
 * listint_len - return number of element
 * of lisint_t
 * @h: pointer to head
 * Return: number of element
 */

size_t listint_len(const listint_t *h)
{
	size_t nbrElement = 0;

	while (h != NULL)
	{
		nbrElement++;
		h = h->next;
	}
	return (nbrElement);
}
