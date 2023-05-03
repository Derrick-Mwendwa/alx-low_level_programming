#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - counts the number of unique elements
 * @head: pointer to the head address
 *
 * Return: no of unique elements otherwise 0
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *x, *y;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	x = head->next;
	y = (head->next)->next;

	while (y)
	{
		if (x == y)
		{
			x = y;
			while (x != y)
			{
				nodes++;
				x = x->next;
				y = y->next;
			}

			x = x->next;
			while (x != y)
			{
				nodes++;
				x = x->next;
			}

			return (nodes);
		}

		x = x->next;
		y = (y->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - frees a listint_t
 * @h: pointer to the head address
 *
 * Return: size of freed list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *x;
	size_t n, index;

	n = looped_listint_count(*h);

	if (n == 0)
	{
		for (; h != NULL && *h != NULL; n++)
		{
			x = (*h)->next;
			free(*h);
			*h = x;
		}
	}

	else
	{
		for (index = 0; index < n; index++)
		{
			x = (*h)->next;
			free(*h);
			*h = x;
		}

		*h = NULL;
	}

	h = NULL;

	return (n);
}
