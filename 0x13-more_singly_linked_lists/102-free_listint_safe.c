#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the first node in the linked list
 *
 * Return: size of the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int d;
	listint_t *t;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			t = (*h)->next;
			free(*h);
			*h = t;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
