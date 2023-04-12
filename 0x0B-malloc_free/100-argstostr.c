#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments
 * @ac: int type
 * @av: char pointer to a pointer
 *
 * Return: pointer to a new string otherwise NULL
 */
char *argstostr(int ac, char **av)
{
	int a, b, c, len;
	char *temp;

	c = 0;
	len = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			len++;
	}
	len += ac;

	temp = malloc(sizeof(char) * len + 1);
	if (temp == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			temp[c] = av[a][b];
			c++;
		}
		if (temp[c] == '\0')
		{
			temp[c++] = '\n';
		}
	}
	return (temp);
}
