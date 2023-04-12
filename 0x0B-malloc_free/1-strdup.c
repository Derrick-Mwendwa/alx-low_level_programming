#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: input string
 *
 * Return: pointer to duplicated string otherwise NULL
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *temp;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
		;

	temp = malloc((i * sizeof(char)) + 1);
	if (temp == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		temp[j] = str[j];
	}
	temp[i] = '\0';

	return (temp);
}
