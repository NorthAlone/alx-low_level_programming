#include "lists.h"

/**
 * pop_listint - eletes the head node
 * @head: node head
 * Return: head node data
 */

int pop_listint(listint_t **head)
{
	listint_t *save;
	int data;

	if (head == NULL || *head == NULL)
		return (0);
	data = (*head)->n;
	save = (*head)->next;
	free(*head);
	*head = save;

	return (num);
}
