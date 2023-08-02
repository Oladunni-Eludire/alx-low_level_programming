#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element
 *
 * Return: the head node data,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *t;
	int n;

	if (!head || !*head)
		return (0);

	n = (*head)->n;
	t = (*head)->next;
	free(*head);
	*head = t;

	return (n);
}
