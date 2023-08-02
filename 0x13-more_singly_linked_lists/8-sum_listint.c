#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sums all the data in a listint_t list
 * @head: first node
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *t = head;

	while (t)
	{
		s += t->n;
		t = t->next;
	}

	return (s);
}
