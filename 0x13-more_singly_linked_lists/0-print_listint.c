#include "lists.h"
#include <stdio.h>

/**
 * print_listint - outputs all elements of listint_t
 * @h: pointer to head of list_t
 *
 * Return: no of nodes in the list_t
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (n);
}
