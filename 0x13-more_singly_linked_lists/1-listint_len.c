#include "lists.h"
#include <stdio.h>

/**
 * listint_len - gets number of elements in listint_t
 * @h: pointer to head of listint_t
 *
 * Return: no of elements in the listint_t
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
