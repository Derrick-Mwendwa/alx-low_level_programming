#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add node at the beginning
 * @head: pointer the list_t
 * @str: input string
 *
 * Return: address of the added element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *l;

	unsigned int len = 0;

	while (str[len])
		len++;

	l = malloc(sizeof(list_t));
	if (!l)
		return (NULL);

	l->str = strdup(str);
	l->len = len;
	l->next = (*head);
	(*head) = l;

	return (*head);
}
