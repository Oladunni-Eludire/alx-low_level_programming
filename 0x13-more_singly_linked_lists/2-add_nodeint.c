#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: double pointer
 * @n: new string
 *
 * Return: address of the new element, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));
	if (!add)
		return (NULL);

	add->n = n;
	add->next = *head;
	*head = add;

	return (add);
}
