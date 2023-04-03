#include <stdlib.h>

/**
 * _strchr - gets the pointer to the first occurence of c
 * @s: input string
 * @c: char to search for
 *
 * Return: pointer to first occurence of c otherwise NULL
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;
	int is_found = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			is_found = 1;
			break;
		}

		i++;
	}

	if (is_found)
		return (s + i);
	else
		return (NULL);
}
