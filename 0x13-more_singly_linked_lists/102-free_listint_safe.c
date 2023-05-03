#include "stdlib.h"
#include "lists.h"

/**
 * free_listint_safe - frees listint_t list safely
 * @h: pointer to head address
 *
 * Return: no of elements in freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	int x;
	listint_t *temp;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h)
	{
		x = *h - (*h)->next;
		if (x > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}

	*h = NULL;

	return (count);
}
