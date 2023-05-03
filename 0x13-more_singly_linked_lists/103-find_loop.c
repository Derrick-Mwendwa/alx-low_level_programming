#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - find the loop in a listint_t list
 * @head: pointer tohead address
 *
 * Return: address of the starting node otherwise NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *x = head;
	listint_t *y = head;

	if (!head)
		return (NULL);

	while (x && y && y->next)
	{
		y = y->next->next;
		x = x->next;
		if (y == x)
		{
			x = head;
			while (x != y)
			{
				x = x->next;
				y = y->next;
			}
			return (y);
		}
	}

	return (NULL);
}
