#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node in a linked list
 * @head: first node
 * @index: index of the node
 *
 * Return: pointer to the nth node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int b = 0;
	listint_t *t = head;

	while (t && b < index)
	{
		t = t->next;
		b++;
	}

	return (t ? t : NULL);
}

