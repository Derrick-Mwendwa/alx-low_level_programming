#include <stdlib.h>
#include "lists.h"

/**
 * list_len - gets no of elements in a linked list
 * @h: pointer to list_t
 *
 * Return: no of elements in p
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
