#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenate two strings
 * @x: the first string
 * @y: the second string
 * @n: number of bytes of y
 *
 * Return: pointer to a newly allocated space in memory
 * or returns NULL if the function fails
 */
char *string_nconcat(char *x, char *y, unsigned int n)
{
	char *c;
	unsigned int j = 0, k = 0, len1 = 0, len2 = 0;

	while (x && x[len1])
		len1++;
	while (y && y[len2])
		len2++;

	if (n < len2)
		c = malloc(sizeof(char) * (len1 + n + 1));
	else
		c = malloc(sizeof(char) * (len1 + len2 + 1));

	if (c == NULL)
		return (NULL);

	while (j < len1)
	{
		c[j] = x[j];
		j++;
	}

	while (n < len2 && j < (len1 + n))
		c[j++] = y[k++];

	while (n >= len2 && j < (len1 + len2))
		c[j++] = y[k++];

	c[j] = '\0';

	return (c);
}
