#include <stdio.h>

/**
 * _strchr - gets the pointer to the first occurence of c
 * @s: input string
 * @c: char to search for
 *
 * Return: pointer to first occurence of c otherwise NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;

		if (i == c)
			return (s - 1);
		if (i == 0)
			return (NULL);
			
	}
}
