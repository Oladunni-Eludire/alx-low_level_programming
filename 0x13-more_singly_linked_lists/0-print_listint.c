#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a listint list
 * @h: pointer to the listint_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_listint(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
		printf("%d\n", h->n);
		a++;
		h = h->next;
	}
	return (a);
}
