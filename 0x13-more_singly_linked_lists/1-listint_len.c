#include <stdlib.h>
#include "lists.h"

/**
  * listint_len - returns the number of elements in a linked list
  * @h: pointer to the listint_t list
  *
  * Return: number of elements in h
  */
size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}

	return (a);
}
