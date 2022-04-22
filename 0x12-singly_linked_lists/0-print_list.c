#include "lists.h"

/**
 * print_list -  prints all the elements
 * of a list_t list.
 * @h: pointer to list_t
 * Return: number of node
 */

size_t print_list(const list_t *h)
{
	size_t nodeNumber = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s", h->len,h->str);
		printf("\n");
		h = h->next;
		nodeNumber++;
	}
	return (nodeNumber);
}
