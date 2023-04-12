#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to string otherwise NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *temp;
	int i, j, y, z;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	temp = malloc((i * sizeof(char)) + (j * sizeof(char)) + 1);
	if (temp == NULL)
	{
		return (NULL);
	}

	for (y = 0, z = 0; y < (i + j + 1); y++)
	{
		if (y < i)
			temp[y] = s1[y];
		else
			temp[y] = s2[z++];
	}

	return (temp);
}
