#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a guven position
 * @head: pointer to the first node
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: address to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int p;
	listint_t *add;
	listint_t *t = *head;

	add = malloc(sizeof(listint_t));
	if (!add || !head)
		return (NULL);

	add->n = n;
	add->next = NULL;

	if (idx == 0)
	{
		add->next = *head;
		*head = add;
		return (add);
	}

	for (p = 0; t && p < idx; p++)
	{
		if (p == idx - 1)
		{
			add->next = t->next;
			t->next = add;
			return (add);
		}
		else
			t = t->next;
	}

	return (NULL);
}
