#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_length - counts number of unique elements
 * @head: pointer to the head address
 *
 * Return: number of unique elements otherwise 0
 */
size_t looped_listint_length(const listint_t *head)
{
	const listint_t *x, *y;
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
 * print_listint_safe - outputs listint_t list
 * @head: pointer to the head address
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n, index = 0;

	n = looped_listint_length(head);

	if (n == 0)
	{
		for (; head != NULL; n++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < n; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (n);
}
